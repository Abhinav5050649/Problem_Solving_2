#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int a, b, c; cin >> a >> b >> c;

    int l1 = abs(a - 1), l2 = abs(c - b) + abs(c - 1);

    if (l1 < l2)    cout << 1 << endl;
    else if (l1 > l2)   cout << 2 << endl;
    else if (l1 == l2)  cout << 3 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}