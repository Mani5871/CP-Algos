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
		
		int arr[n + 1];
		
        for(i = 0; i < n + 1; i ++)
            arr[i] = -1;

        arr[0] = arr[1] = -1;

        for(i = 2; i * i <= n; i ++)
        {
            if(arr[i] != -1)
                continue;

            for(j = i * i; j <= n; j += i)
                if(arr[j] == -1)
                    arr[j] = i;
        }
        
        while(arr[n] != -1)
        {
            cout << arr[n] << " ";
            n /= arr[n];
        }
        cout << n;
		cout << endl;
	}
		
	return 0;
}
