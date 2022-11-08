#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int len; cin >> len;
    string code; cin >> code;
    string ans = "";

    for (int i = len - 1; i >= 0; --i)
    {
        char temp = code[i];
        if (temp == '0')
        {
            stringstream ss; 
            ss << code[i - 2] << code[i - 1];
            int num; ss >> num;
            char ch = num + 96;
            ans.push_back(ch);
            i -= 2;
        }
        else 
        {
            stringstream ss; ss << code[i];
            int num; ss >> num;
            num += 96;
            char ch = num;
            ans.push_back(ch);
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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