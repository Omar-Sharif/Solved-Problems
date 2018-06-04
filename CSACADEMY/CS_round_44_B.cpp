#include<bits/stdc++.h>
using namespace std;

int ara[700][700];
int vis[700][700];
int vis1[100010];

int check(int x,int y,int c,int v)
{
    int flag=1;
    vis1[v]=1;
    for(int i=x;i<x+c and flag==1;i++){
        for(int j=y;j<y+c;j++){
            vis[i][j]=1;
            if(ara[i][j]!=v){
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int n,m;
    cin>>n>>m;
    memset(ara,-1,sizeof(ara));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>ara[i][j];
    }

    int sti,stj,coun,value=-1,flag=1;

    for(int i=1;i<=n;i++){
        coun=0;value=-1;
        for(int j=1;j<=m;j++){
            if(vis[i][j]==1)continue;
            else if (vis1[ara[i][j]]==1){
                flag=0;
                break;
            }
            else if(value==-1){
                sti=i;stj=j;coun=1;value=ara[i][j];
            }
            else if(value==ara[i][j])coun++;
            else if(value!=ara[i][j]){
                flag=check(sti,stj,coun,value);
                sti=i;stj=j;coun=1;value=ara[i][j];
            }
            if(flag==0)break;
        }
        if(flag==0)break;
        if(coun>0){
            flag=check(sti,stj,coun,value);
        }
    }
    cout<<flag<<endl;

}
