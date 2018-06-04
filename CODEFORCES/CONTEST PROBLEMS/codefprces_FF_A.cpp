#include<bits/stdc++.h>
using namespace std;

bool ara[500];

int main()
{
    int flag=0,p,n;
    long long x,m,h;
    while(cin>>p>>n){
            flag=0;
        memset(ara,0,sizeof(ara));

        for(int i=1;i<=n;i++){
            cin>>x;
            m=x%p;
            if(ara[m]==1&& flag==0){
                flag=1;
                h=i;
            }
            else{
                ara[m]=1;
            }

        }
        if(flag==1)
            cout<<h<<endl;
        else cout<<-1<<endl;
    }
}
