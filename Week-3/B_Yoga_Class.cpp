#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (x + x > y)
        {
            cout << x * n << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << y * n / 2 << endl;
            }
            else
            {
                n--;
                cout << (y * n / 2) + x * 1 << endl;
            }
        }
    }
    return 0;
}