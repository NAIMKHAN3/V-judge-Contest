#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,n,m;
    cin >> x >> n >> m;
    int total = x+m;
    if(total>= n){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}