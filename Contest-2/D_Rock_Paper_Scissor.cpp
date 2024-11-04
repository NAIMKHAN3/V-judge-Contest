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
        int n;
        cin >> n;
        string x, y;
        cin >> x >> y;

        int player1 = 0, player2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (x[i] == y[i])
            {
                continue;
            }
            else if ((x[i] == 'R' && y[i] == 'S') ||
                     (x[i] == 'S' && y[i] == 'P') ||
                     (x[i] == 'P' && y[i] == 'R'))
            {
                player1++;
            }
            else
            {
                player2++;
            }
        }

        if (player1 > player2)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = (player2 - player1) / 2 + 1;
            cout << ans << endl;
        }
    }

    return 0;
}