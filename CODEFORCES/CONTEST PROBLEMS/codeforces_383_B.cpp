#include<bits/stdc++.h>
using namespace std;

#define mx 1000100
#define lli long long
lli ara[mx],coun[mx];

int main()
{
    lli n,x;
    while(cin>>n>>x){
        for(lli i=1;i<=n;i++){
            cin>>ara[i];
            coun[ara[i]]++;
        }
        lli count=0,v;

        if(x!=0){
            for(lli i=1;i<=n;i++){
                v=(x^ara[i]);
                count+=(lli)coun[v];
            }
        }
        else{
            for(lli i=1;i<=n;i++)
               count+=(lli)coun[ara[i]]-1;
        }
        cout<<count/2<<endl;
    }
}
