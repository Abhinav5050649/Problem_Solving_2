#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;

    // while (n--)
    // {
    //     if (abs(a - x) > abs(b - y) && a >= x && b >= y)
    //     {
    //         --a;
    //     }
    //     else if(abs(a - x) <= abs(b - y) && b >= y && a>= x){
    //         --b;
    //     }
    // }

    if (abs(a - x) > abs(b - y))
    {
        if (a >= x)
        {
            while (n-- && a >= x)
            {
                --a;
            }
        }

        if (n > 0)
        {
            if (b >= y)
            {
                while (n-- && b >= y)
                {
                    --b;
                }
            }
        }
    }
    else if (abs(b - y) >= abs(a - x))
    {
        if (b >= y)
        {
            while (n-- && b >= y)
            {
                --b;
            }
        }

        if (n > 0)
        {
            if (a >= x)
            {
                while (n-- && a >= x)
                {
                    --a;
                }
            }
        }
    }

    cout << a*b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    ll t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}