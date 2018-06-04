#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int ara[2*n+1],ara2[2*n+1];
        for(int i=1;i<=2*n+1;i++){
            ara[i]=0;
        }
        int u;
        for(int i=1;i<=n;i++){
            cin>>u;
            ara2[i]=u;
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(ara[ara2[i]]==1){
                for(int j=ara2[i];;j++){
                    if(ara[j]==1){
                        count++;
                    }
                    else{
                        ara[j]=1;
                        break;
                    }
                }
            }
            else{
                ara[ara2[i]]=1;
            }
        }
        cout<<count<<endl;
    }
}
