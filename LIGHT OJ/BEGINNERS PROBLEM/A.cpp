#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    if(x<2)cout<<0<<endl;
    else{
        int a=4,count=0;
       for(int i=3;i<=x;){
            //cout<<i<<endl;
            count++;
            i+=a;
            a++;
       }
       cout<<count<<endl;
    }
}
