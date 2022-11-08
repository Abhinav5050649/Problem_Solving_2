#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
#define MOD 1000000007

ll fact(ll n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else{
        return (n * fact(n - 1))% MOD;
    }
}

void solve()
{
    ll n; cin >> n;
    cout << fact(n) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    solve();
    return 0;
}