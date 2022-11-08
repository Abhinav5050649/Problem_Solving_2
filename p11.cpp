#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

void solve()
{
    ll a, b; cin >> a >> b;

    if (a == 0 || b == 0)
    {
        cout << 0 << endl;
    }    
    else 
    {
        if (a > b)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        if (2 * a <= b)
        {
            cout << a << endl;
        }else{
            cout << (a + b)/3 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int t; cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}