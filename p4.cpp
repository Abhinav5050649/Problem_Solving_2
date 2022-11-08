#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int n; cin >> n;
    while (n--)
    {
        int a; cin >> a;

        if (a < 60)
        {
            cout << "NO" << endl;
        }
        else 
        {
            if (360%a!= 0)
            {
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}