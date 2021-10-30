// Step1 : Create a seive for 10 ^ 6 elements
// Step2 : Store primes till sqrt(r)
// Step3 : Create a dummy array of size r - l + 1 and initialize with 1
// Step4 : for every prime number in primes vector make the entry of j - l as zero
//  Condition1 : For first multiple fm = (l / i) * i. If fm < l, fm += i
//  Condition2 : j = max(fm, i * i) i is the prime


#include <bits/stdc++.h> 
using namespace std;

typedef long long int lli;
# define mod 1000000007
# define endl "\n"
# define lp(i, n) for(i = 0; i < n ; i ++)
# define pb push_back

int main() {

    lli l, r;
    l = 10;
    r = 100;

    lli n = (int) pow(10, 6);
    bool seive[n + 1];
    memset(seive, true, sizeof(seive));

    lli i, j, k;
    for(i = 2; i * i <= n; i ++) 
    {
        if(seive[i] == false)
            continue;
        
        for(j = i * i; j <= n; j += i)
            seive[j] = false;
    }

    vector<int> primes;
    for(i=  2; i * i <= r; i ++)
    {
        if(seive[i] == true)
            primes.push_back(i);
    }
	
    int dummy[r - l + 1];

    for(i = 0; i <= r - l + 1; i ++)
        dummy[i] = 1;
    
    for(auto pr : primes)
    {
        int firstmultiple = (l / pr) * pr;

        if(firstmultiple < l)
            firstmultiple += pr;

        for(j = max(pr * pr, firstmultiple); j <= r; j += pr)
        {
            dummy[j - l] = 0;
        }
    }
    
    
    for(i = l; i <= r; i ++)
    {
        if(dummy[i - l] == 1)
            cout << i << " ";
    }

	return 0;
}
