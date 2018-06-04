#include<bits/stdc++.h>
using namespace std;
int ara[110];

int main()
{
    int n,k,x;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    if(k<2){
        cin>>x;
        for(int i=1;i<=n;i++)
            if(ara[i]==0)ara[i]=x;

        for(int i=1;i<=n;i++){
            if(ara[i]<ara[i-1]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        cout<<"No"<<endl;
    }
    else{
        for(int i=1;i<=k;i++)cin>>x;
        cout<<"Yes"<<endl;
    }
}
