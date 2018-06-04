#include<bits/stdc++.h>
using namespace std;

map<char,int>ara;
map<int,char>ara1;
int n,m,vis[15][15];
char my[15][15];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};

int check()
{
    ara['L']=0;ara['U']=1;ara['R']=2;ara['D']=3;
    ara1[0]='L';ara1[1]='U';ara1[2]='R';ara1[3]='D';
}
int dfs(int x,int y,char c,int v,int k)
{
    if(k>2000)return 0;
    int xx=x+dx[v];
    int yy=y+dy[v];
    //cout<<x<<' '<<y<<' '<<c<<' '<<v<<endl;
    //cout<<xx<<' '<<yy<<endl;
    if(xx>n or xx<1 or yy>m or yy<1){
        v++;v%=4;
        c=ara1[v];
        dfs(x,y,c,v,k+1);
        //cout<<v<<' '<<c<<' '<<endl;
    }
    else if(my[xx][yy]=='*'){
        v++;v%=4;
        c=ara1[v];
        dfs(x,y,c,v,k+1);
    }
    else{
        vis[xx][yy]++;
        dfs(xx,yy,c,v,k+1);
    }

    return 0;
}
int main()
{
    check();
    while(cin>>n>>m){
        int xx,yy,v;
        char c;
        memset(vis,0,sizeof(vis));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>my[i][j];
                if(my[i][j]!='.' and my[i][j]!='*'){
                    c=my[i][j];
                    v=ara[c];
                    xx=i;yy=j;
                    vis[xx][yy]++;
                }
            }
        }
       // cout<<c<<' '<<v<<' '<<xx<<' '<<yy<<endl;
       // cout<<xx<<' '<<yy<<' '<<c<<' '<<v<<endl;
        dfs(xx,yy,c,v,1);
        int count=0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
              //  cout<<vis[i][j];
                if(vis[i][j]==0)continue;
                count++;
            }
            //cout<<endl;
        }
        cout<<count<<endl;
    }
}
