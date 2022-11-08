#include "bits/stdc++.h"
using namespace std;

bool isPal(string word)
{
    int len = word.length();
    for (int i = 0; i <= len/2; ++i)
    {
        if (word[i] != word[len - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int flag = -1;
    string input; cin >> input;
    sort(input.begin(), input.end());
    do
    {
        if (isPal(input))
        {
            flag = 1;
            cout << input << endl;
            break;
        }

    } while (next_permutation(input.begin(), input.end()));
    
    if (flag == -1)
    {
        cout << "NO SOLUTION" << endl;
    }

    return 0;
}