#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
#define pb push_back
const ll mod = 1e9 + 7;
typedef vector<ll> vll;

ll bin_exp(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)  res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return ((a * b)/gcd(a, b));
}

void solve()
{
    ll t; cin >> t;
    while (t--)
    {
        ll a, b, c, d; cin >> a >> b >> c >> d;

        if ((a == 0 && b == 0 && c == 0 && d == 0) || (a/b == c/d))
        {
            cout << "0"<< endl;
        }
        else
        {
            if ((a == 0 && c != 0) || (a != 0 && c == 0))
            {
                cout << "1" << endl;
            }
            else if (((c/d)%(a/b) == 0) || ((a/b) % (c/d) == 0))
            {
                cout << lcm(a/b, c/d) << endl;
            }
            else
            {
                // if ((a == c && b != d) || (a == d && b != c) || (a > 1 && b == 1 && c > 1 && d > 1) || (a == 1 && b > 1 && c > 1 && d > 1) || (a > 1 && b > 1 && c == 1 && d > 1)|| (a > 1 && b > 1 && c > 1 && d == 1))
                // {
                //     cout << "2" << endl;
                // }
                if ((a == c && b != d) || (a == d && b != c) || (gcd(a, c) != 1 || gcd(b, d) != 1 || gcd(a, d) != 1 || gcd(b, c) != 1))
                {
                    cout << "2" << endl;
                }
                else if (a > 1 && b > 1 && c > 1 && d > 1 && (gcd(a, c) != 1 && gcd(b, d) != 1 && gcd(a, d) != 1 && gcd(b, c) != 1))
                {
                    cout << "4" << endl;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    solve();

    return 0;
}