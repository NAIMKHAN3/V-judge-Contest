#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        map<char, int> mp;
        int ans = 0;
        for (char c : s)
        {
            mp[c]++;
        }


        ans += min(mp['A'], n);
        ans += min(mp['B'], n);
        ans += min(mp['C'], n);
        ans += min(mp['D'], n);
        if (ans == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int q = mp['?'];
        vector<int> v;

        if (mp['A'] < n)
            v.push_back(n - mp['A']);
        if (mp['B'] < n)
            v.push_back(n - mp['B']);
        if (mp['C'] < n)
            v.push_back(n - mp['C']);
        if (mp['D'] < n)
            v.push_back(n - mp['D']);

        int total = 0;
        for (int a : v)
        {
            total += a;
        }

        if (q < total)
        {
            cout << ans << endl;
            continue;
        }

        for (int a : v)
        {
            if (q >= a)
            {
                ans += a;
                q -= a;
            }
            else
            {
                ans += q;
                q = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
