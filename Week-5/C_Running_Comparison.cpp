#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> alice(n);
        vector<int> bob(n);
        for(int i=0; i<n; i++){
            cin >> alice[i];
        }
        for(int i=0; i<n; i++){
            cin >> bob[i];
        }
        int happy = 0;
        for(int i=0; i<n; i++){
            if(alice[i] <= (bob[i] * 2) && bob[i] <= (alice[i] * 2)){
                happy++;
            }
        }
        cout << happy << endl;
    }
    return 0;
}