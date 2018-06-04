#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
queue<pii>q,s;
#define inf 1000
char ara[201][201];
int level[201][201];
int fx[]={0,1,0,-1};
int fy[]={-1,0,1,0};
int r,c,myvalue;

int bfs(int x,int y)
{
    level[x][y]=0;
    s.push(pii(x,y));

    while(!s.empty())
    {
        pii top=s.front();s.pop();

        if(top.first==1 or top.first==r or top.second==1 or top.second==c){
                return level[top.first][top.second]+1;
        }

        for(int k=0;k<4;k++){
            int xx=top.first+fx[k];
            int yy=top.second+fy[k];

            if(xx<1 or xx>r or yy<1 or yy>c) continue;
            if(level[top.first][top.second]+1>=level[xx][yy] or ara[xx][yy]=='F') continue;
            if(level[xx][yy]==-1)continue;

            if(level[top.first][top.second]+1<level[xx][yy]){
                level[xx][yy]=level[top.first][top.second]+1;
                s.push(pii(xx,yy));
            }
        }
    }
    return 0;
}

int bfs1()
{
    while(!q.empty()){
        pii top=q.front(); q.pop();

        for(int k=0;k<4;k++){
            int xx=top.first+fx[k];
            int yy=top.second+fy[k];
            if(xx<1 or xx>r or yy<1 or yy>c) continue;
            if(ara[xx][yy]=='#') continue;
            if(ara[xx][yy]=='J' or ara[xx][yy]=='.'){
                ara[xx][yy]='#';
                level[xx][yy]=level[top.first][top.second]+1;
                q.push(pii(xx,yy));
            }
        }
    }
    return 0;
}
int main()
{
    int t,cas=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&r,&c);
        getchar();
        int x,y;

        memset(level,-1,sizeof(level));
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                scanf("%c",&ara[i][j]);
                if(ara[i][j]=='J'){
                    x=i,y=j;
                }
                else if(ara[i][j]=='F'){
                    q.push(pii(i,j));
                    level[i][j]=0;
                }
                else if(ara[i][j]=='.'){
                    level[i][j]=inf;
                }
            }
            getchar();
        }
        bfs1();
          /*for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++)
               cout<<level[i][j];
               cout<<endl;
        }*/


        int n=bfs(x,y);
        if(n==0) printf("Case %d: IMPOSSIBLE\n",++cas);
        else printf("Case %d: %d\n",++cas,n);
        while(!q.empty()){
            q.pop();
        }
        while(!s.empty()){
            s.pop();
        }

    }
}


