#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
        }
        else if ((a != 0 && b == 0) || (a == 0 && b != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            int t1 = a, t2 = b;

            while (t1 > 0 && t2 > 0)
            {
                int num1 = max(t1, t2)/2;
                if (t1 > t2)
                {
                    t1 /= 2;
                    t2 -= num1;
                } 
                else{
                    t2 /= 2;
                    t1 -= num1;
                }
            }

            if (t1 > 0 || t2 > 0)
            {
                cout << "NO" << endl;
            }
            else if (t1 == 0 && t2 == 0)
            {
                cout << "YES" << endl;
            }
        }
        /*
        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
        }
        else if ((a != 0 && b == 0) || (a == 0 && b != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((a + b) % 3 == 0)
            {
                if (min(a, b) * 2 == max(a, b))
                {
                    cout << "YES" << endl;
                }
                else if (abs(a - b) <= ceil(min(a, b)/2))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
        */
    }
    return 0;
}