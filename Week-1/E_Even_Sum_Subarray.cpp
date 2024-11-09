#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int sum = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v.push_back(x);
        }
        if (sum % 2 == 0)
        {
            cout << v.size() << endl;
        }
        else if (v.size() == 1 && sum % 2 == 0)
        {

            cout << 1 << endl;
        }
        else if (v.size() == 1 && sum % 2 == 1)
        {
            cout << 0 << endl;
        }else{
            while(true){
                int x = v.back();
                v.pop_back();
                sum -= x;
                if(sum % 2 == 0){
                    break;
                }
            }
            cout << v.size() << endl;
        }
    }
    return 0;
}