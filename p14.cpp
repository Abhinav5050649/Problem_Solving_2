#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n; cin >> n;

    int sum = 0, flag = -1;

    for (int i = 0; i < n; ++i)
    {
        int num; cin >> num;

        if (num == 25)
        {
            sum += num;
            continue;
        }
        else if (num == 50 || num == 100)
        {
            if (num == 50)
            {
                if (sum == 0 || sum < 25)
                {
                    flag = 1;
                    break;
                }
                else if (sum >= 25)
                {
                    sum += 25;
                }
            }
            else if (num == 100){
                if (sum == 0 || sum < 75)
                {
                    flag = 1;
                    break;
                }
                else if (sum >= 75)
                {
                    sum += (25);
                }
            }
        }

        if (flag  == 1)
        {
            break;
        }
    }

    if (flag  == 1){
        cout << "NO" << endl;
    }
    else if (flag == -1)
    {
        cout << "YES"<< endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    solve();

    return 0;
}