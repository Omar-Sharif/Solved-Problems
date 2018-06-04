#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

int my[210][210];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};


int dfs(int x,int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    int u,v,xx,yy,c,a,b;

    while(!q.empty()){
        u=q.front().first;
        v=q.front().second;
        q.pop();

        c=my[u][v];
        a=c%4;
        my[u][v]=a;
        b=c/4;

        for(int k=0;k<4;k++){
            xx=dx[k]+u;
            yy=dy[k]+v;
            my[xx][yy]+=b;
            if(my[xx][yy]>=4)q.push(pii(xx,yy));
        }

    }
}

int main()
{
    int x,y,n,t;
    scanf("%d %d",&n,&t);
    memset(my,0,sizeof(my));
    my[100][100]=n;
    dfs(100,100);

    while(t--){
        scanf("%d %d",&x,&y);
        if(abs(x)>=100 or abs(y)>=100)printf("0\n");
        else printf("%d\n",my[x+100][y+100]);
    }
}

