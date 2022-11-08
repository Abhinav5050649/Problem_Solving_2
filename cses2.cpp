#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    int n; cin >> n;
    unordered_map<int, int> m;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int num; cin >> num;
        
        if (m[num] == 0)
        {
            ++cnt;
            m[num]++;
        }
        else{
            m[num]++;
        }
    }

    cout << cnt << endl;
    m.clear();

    return 0;
}