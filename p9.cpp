#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    if (n % 2 != 0 && k == 1)
    {
        cout << "YES" << endl;
    }else{
        if (n % 2 == 0 && k % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && k % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && k % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 != 0 && k % 2 == 0)
        {
            cout << "NO" << endl;
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