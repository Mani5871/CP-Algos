#include <bits/stdc++.h> 
using namespace std;

# define long long int lli
# define mod 1000000007
# define endl "\n"
# define lp(i, n) for(i = 0; i < n ; i ++)
# define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) 
	{
		int i, j, k, n;
		cin >> n;
		
		for(i = 2; i * i <= n; i ++)
		{
		    if(n % i == 0)
		    {
		        int cnt = 0;
		        while(n % i == 0)
		        {
		            cnt ++;
		            n /= i;
		        }
		        
		        cout << i << " ^ " << cnt << " ";
		    }
		}
		if(n > 1)
		    cout << n << " ^ 1 ";
		cout << endl;
	}
		
	return 0;
}
