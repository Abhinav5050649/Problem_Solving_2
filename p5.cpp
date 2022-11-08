#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int n; cin >> n;
    int case1 = 0, case2 = 0;
    while (n--)
    {
        int a, b; cin >> a >> b;
        if (a < b)  case1 = 1;
        else if (a > b) case2 = 1;
    }

    if (case1 == 1 && case2 == 1)
    {
        cout << "Happy Alex" << endl;
    }else{
        cout << "Poor Alex" << endl;
    }
    return 0;
}