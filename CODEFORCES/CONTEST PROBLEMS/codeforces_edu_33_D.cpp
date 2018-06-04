#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010],n,d;

int main()
{
    cin>>n>>d;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    lli count=0,value=0,mn=0;

    for(int i=1;i<=n;i++){
        if(ara[i]==0){
            if(value>=0)continue;
            if(value+mn>=0){
                mn-=(0-value);
                value=0;
            }
            if(value+mn<0){
                count++;
                value=0;
                mn=d;
            }
        }
        value+=ara[i];
        if(value>d){
            cout<<-1<<endl;
            return 0;
        }
        if(count>0)mn=min(mn,d-value);
    }
    cout<<count<<endl;
}
