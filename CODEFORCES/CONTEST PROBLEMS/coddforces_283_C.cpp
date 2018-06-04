#include<bits/stdc++.h>
using namespace std;

string str[110];
int vis[110],n,m;

int check()
{
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m;j++){
            if(vis[j]==1)continue;
           // cout<<i<<' '<<j<<' '<<str[i][j]<<' '<<str[i+1][j]<<endl;
            if(str[i][j]==str[i+1][j])continue;
            if(str[i][j]>str[i+1][j]){
                flag=1;
                vis[j]=1;
                break;
            }
            else break;
        }
        if(flag==1)break;
    }
    return flag;
}
int main()
{
    while(cin>>n>>m){
        for(int i=0;i<n;i++) cin>>str[i];
        memset(vis,0,sizeof vis);

        int x=1,count=0;;
        while(1){
            int x=check();
            if(x==0)break;
        }
        for(int i=0;i<m;i++)
            if(vis[i]==1)count++;
        cout<<count<<endl;
    }
}
