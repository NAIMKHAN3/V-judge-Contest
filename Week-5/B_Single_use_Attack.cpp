#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int h,x,y;
        cin >> h >> x >> y;
        int ans = 1;
        h -=y;
        while(h>0){
            h -= x;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}