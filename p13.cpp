#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string word; cin >> word;
    int n; cin >> n;

    vector<int> arr(1000001, -1);

    for (int i = 0, len = word.length(); i < n; ++i)
    {
        int l, r; cin >> l >> r;
        int sum = 0;
        for (int j = l; j < r; ++j)
        {
            if (j == len - 1)
            {
                arr[j] = 1;
            }
            else
            {
                if (word[j - 1] == word[j])
                {
                    arr[j] = 1;
                }
            }
        }

        for (int j = l; j < r; ++j)
        {
            if (arr[j] == 1)    sum++;
        }

        cout << sum << endl;
    }
    arr.clear();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    solve();
    
    return 0;
}