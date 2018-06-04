#include<bits/stdc++.h>
using namespace std;

int ara[5010],ara1[5010],ara2[5010];

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            cin>>ara[i];
        }

        int mx=0,value=n+10;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                mx=0,value=n+10;
                for(int k=j;k<=i;k++){
                        cout<<k<<' ';
                    int x=ara[k];
                    ara1[x]++;
               // cout<<x<<' '<<ara1[x]<<endl;

                    if(ara1[x]>mx){
                        value=x;
                        mx=ara1[x];
                    }
                    else if(ara1[x]==mx and ara1[x]!=0){
                        value=min(x,value);
                    }
                }
                cout<<endl;
                cout<<value<<endl;
                ara2[value]++;
                cout<<endl;
            }
            }
            for(int i=1;i<=n;i++){
                if(i==n)cout<<ara2[i]<<endl;
                else cout<<ara2[i]<<' ';
            }
            cout<<endl;
        }
}
