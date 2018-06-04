#include<bits/stdc++.h>
using namespace std;
#define inf 1000

int dirx[]={0,1,0,-1};
int diry[]={-1,0,1,0};

string s[1010];
int vis[1010][1010][4][3];
int n,m,si,sj,gi,gj;

int dfs(int sx,int sy,int cha,int count)
{
    if(vis[sx][sy][cha][count])return false;
    if(sx==gi and sy==gj)return true;
    vis[sx][sy][cha][count]=true;
    for(int i=0;i<4;i++){
        int x=sx+dirx[i];
        int y=sy+diry[i];
        if(x<0 or x>=n or y<0 or y>=m)continue;
        if(s[x][y]=='*')continue;
        if(i==cha){
            if(dfs(x,y,i,count))return true;
        }
        else if(count<2){
            if(dfs(x,y,i,count+1)) return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>s[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='S'){
                si=i;sj=j;
            }
            if(s[i][j]=='T'){
                gi=i;gj=j;
            }
        }
    }

    int a=0;
    for(int i=0;i<4;i++){
        int x=si+dirx[i];
        int y=sj+diry[i];
        if(x<0 or x>=n or y<0 or y>=m)continue;
        if(s[x][y]=='*')continue;
        a=max(a,dfs(x,y,i,0));
    }
    if(a<=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

