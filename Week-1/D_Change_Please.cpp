#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, pay = 0;
        cin >> x;
        int y = 100 - x;
        while (true)
        {
            y -= 10;
            if (y < 0)
            {
                break;
            }
            pay+=10;
        }
        cout << pay << endl;
    }
    return 0;
}