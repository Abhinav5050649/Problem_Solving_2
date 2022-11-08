#include "bits/stdc++.h"
using namespace std;

vector<int> fib(1e6 + 1, -1);

void initialise_fib_numbers()
{
    fib[0] = 0, fib[1] = 1;

    for (int i = 2; i < 1e6 + 1; ++i)
    {
        if (fib[i] == -1)
        {
            fib[i] = fib[i -1] + fib[i - 2];
        }
    }
}

int main()
{
    cout.tie(0), cin.tie(0);
    ios_base::sync_with_stdio(false);

    initialise_fib_numbers();

    int n; cin >> n;
    cout << fib[n] << endl;
    fib.clear();
    return 0;
}