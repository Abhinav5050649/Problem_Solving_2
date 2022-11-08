#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> shops(n, 0);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> shops[i];
    }
    
    int  q; cin >> q;
    vector<int> coins(q, 0);
    for (int i = 0; i < q; ++i)
    {
        cin >> coins[i];
    }

    sort(shops.begin(), shops.end());
    
    for (int i = 0; i < q; ++i)
    {
        vector<int>::iterator ans = upper_bound(shops.begin(), shops.end(), coins[i]);
        if (ans > shops.end())
        {
            cout << 0 << endl;
        }else{
            cout << ans - shops.begin()<<  endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    // int t; cin >> t;
    // while (t--)
    // {
        solve();
    //}
    return 0;   
}