#include "bits/stdc++.h"
using namespace std;

typedef vector<int> vii;

void solve()
{
    int n; cin >> n;
    vii one, two, three;
    for (int i = 0; i < n; ++i)
    {
        int num; cin >> num;
        one.push_back(num);
    }    

    for (int i = 0; i < n - 1; ++i)
    {
        int num; cin >> num;
        two.push_back(num);
    }

    for (int i = 0; i < n - 2; ++i)
    {
        int num; cin >> num;
        three.push_back(num);
    }

    
}

int main()
{
    
    return 0;
}