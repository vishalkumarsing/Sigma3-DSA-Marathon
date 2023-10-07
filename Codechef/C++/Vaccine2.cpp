#include <iostream>
#include <cmath>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, p, x, y, d;
        float c1 = 0, c2 = 0;
        cin >> n >> p;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (p == 1)
        {
            d = n;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] <= 9 || a[i] >= 80)
                {
                    c1++;
                }
                else
                {
                    c2++;
                }
            }
            c1 = c1 / p;
            x = ceil(c1);
            c2 = c2 / p;
            y = ceil(c2);
            d = x + y;
        }
        cout << d << endl;
    }
}