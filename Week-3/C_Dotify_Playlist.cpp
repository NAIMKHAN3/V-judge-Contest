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
        int n, k, language;
        cin >> n >> k >> language;

        vector<pair<int, int>> songs;
        for (int i = 0; i < n; i++)
        {
            int m, l;
            cin >> m >> l;
            if (l == language)
            {
                songs.push_back({m, l});
            }
        }

        if (songs.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        sort(songs.rbegin(), songs.rend());

        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += songs[i].first;
        }

        cout << ans << endl;
    }
    return 0;
}
