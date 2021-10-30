#include <bits/stdc++.h> 
using namespace std;

typedef long long int lli;
# define mod 1000000007
# define endl "\n"
# define lp(i, n) for(i = 0; i < n ; i ++)
# define pb push_back

void gcd(int a, int b, int &x, int &y) 
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return;
    }

    int x1, y1;
    gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
    a = 51;
    b = 24;

    int x, y;
    gcd(a, b, x, y);
    cout << x << " " << y << endl;
		
	return 0;
}
