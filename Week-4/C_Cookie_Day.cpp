#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        long long ans = INT_MAX;
        for (long long i = 0; i < n; i++)
        {
            if (v[i] >= k)
            {
                flag = true;
                ans = min(ans, v[i] % k);
            }
        }
        cout << (flag ? ans : -1) << endl;
    }
    return 0;
}