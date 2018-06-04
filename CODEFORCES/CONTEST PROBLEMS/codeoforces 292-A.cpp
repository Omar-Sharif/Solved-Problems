#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s,sum;
    while(cin>>a>>b>>s){
        sum=abs(a)+abs(b);
        if(s<sum)
            cout<<"No"<<endl;
        else if((s-sum)%2==0)
            cout<<"Yes"<<endl;
        else if((s-sum)%2!=0)
            cout<<"No"<<endl;
    }
    return 0;
}
