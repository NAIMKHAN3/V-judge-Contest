#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
   int a=0;
    int x,y;
    cin>>x>>y;
    for(int i = x; i>0; i--){
        if(y){
            a+= pow(2,i);
            y--;
        }else{
            a-=pow(2,i);
        }
    }
    cout << a<< endl;
   }
    return 0;
}