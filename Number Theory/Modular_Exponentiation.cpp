#include <bits/stdc++.h> 
using namespace std;

typedef long long int lli;
#define modd 1000000007;
// # define endl "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) 
	{
		lli a, b;
        cin >> a >> b;

        int res = 1;
        while(b)
        {
            if(b % 2) 
            {
                res = (res * a) % modd;
                b --;
            }

            else
            {
                a = (a * a) % modd;
                b /= 2;
            }
        }

        cout << res << endl;
	}
		
	return 0;
}
