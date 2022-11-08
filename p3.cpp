#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n; cin >> n;
    /*int count[5] = {0};
    
    for (int i = 0; i < n; ++i)
    {
        int num; cin >> num;
        count[num]++;
    }

    int total = count[2] + count[3] + count[4]/2;
    count[1] -= count[3];

    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }

    if (count[1] > 0)
    {
        total += (count[1] + 3)/4;
    }

    cout << total << endl;
    */
   vector<int> arr(n, 0);
   for (int i = 0; i < n; ++i)
   {
        cin >> arr[i];
   }

    sort(arr.begin(), arr.end());
    int flag = -1, sum = 0;
    
    for (int i = 0; i < n; ++i)
    {
        if (sum > 4)
        {
            flag = i;
            break;
        }else if (sum + arr[i] > 4){
            flag = i;
            break;
        }else{
            sum += arr[i];
        }
    }

    int count = 1;
    sum = 0;
    for (int j = flag; j < n; ++j)
    {
        sum += arr[j];
    }
    count += sum/4;
    if (sum % 4 != 0)
    {
        count += 1;
    }
    cout << count << endl;
    arr.clear();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    solve();

    return 0;
}