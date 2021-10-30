#include <bits/stdc++.h> 
using namespace std;

typedef long long int lli;
# define mod 1000000007
# define endl "\n"
# define lp(i, n) for(i = 0; i < n ; i ++)
# define pb push_back

int linear_diophantine(int a, int b, int c, int &x, int &y, int & x0, int &y0) 
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int d = linear_diophantine(b, a % b, c, x1, y1, x0, y0);

    x = y1;
    y = x1 - (a / b) * y1;
    x0 = x * (c / d);
    y0 = y * (c / d);
    return d;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
    a = 51;
    b = 24;
    c = 105;
    cout << a << " " << b << " " << c << endl;

    int x, y, x0, y0;
    int g = linear_diophantine(a, b, c, x, y, x0, y0);
    if(c % g != 0) 
    {
        cout << "Solution not possible" << endl;
        return 0;
    }
    cout << x0 << " " << y0 << endl;
    cout << "Some of the possible solutions are: " << endl;

    int k = 5;
    for(int i = 1; i <= k; i ++)
    {
        x = x0 + i * (b / g);
        y = y0 - i * (a / g);

        cout << x << " " << y << endl;
    }
		
	return 0;
}
