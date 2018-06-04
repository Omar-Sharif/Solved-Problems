#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int fx[]={0,1,0,-1};
int fy[]={-1,0,1,0};

struct point
{
    int b,x,y;
};

vector<point>v;
string ara[510];
int row,col,coun,s,k;

int bfs(int sx,int sy)
{
    map<int,bool>vis[510];
    vis[sx][sy]=1;
    queue<pii>q;
    q.push(pii(sx,sy));

    int c=0;
    //cout<<"sx "<<sx<<' '<<sy<<endl;
    while(!q.empty())
    {
        pii top=q.front();q.pop();

        for(int i=0;i<4;i++){
            int tx=top.first+fx[i];
            int ty=top.second+fy[i];
            //cout<<"tx "<<tx<<' '<<ty<<endl;
            if(tx<0 or tx>=row or ty<0 or ty>=col)continue;
            if(ara[tx][ty]!='.')continue;
            if(vis[tx][ty]==1)continue;
            vis[tx][ty]=1;
            //cout<<"MY "<<tx<<' '<<ty<<endl;
            c++;
            q.push(pii(tx,ty));
        }
    }
    //cout<<c<<endl;
    return c;
}

int main()
{
    point p;
    while(cin>>row>>col>>k)
    {
        for(int i=0;i<row;i++)cin>>ara[i];

        coun=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(ara[i][j]=='.'){
                    p.b=0;
                    p.x=i;p.y=j;
                    v.push_back(p);
                    coun++;
                }
            }
        }

        int value=0,c;
        for(int i=0;i<v.size();i++){
            if(value>=k)break;
            c=0;
            if(v[i].b==0)
            {
                int px=v[i].x;
                int py=v[i].y;
                //cout<<"px "<<px<<' '<<py<<endl;
                ara[px][py]='X';
                v[i].b=1;

                for(int j=i+1;j<v.size();j++){
                    if(v[j].b==0){
                        int mx=v[j].x;
                        int my=v[j].y;
                        c=bfs(mx,my)+1;
                        break;
                    }
                }
                //cout<<"coun "<<coun<<' '<<c<<endl;
                if(coun-c==1){
                    coun=c;
                    v[i].b=1;
                    i=0;
                   // cout<<px<<' '<<py<<endl;
                    value++;
                }
                else{
                    ara[px][py]='.';
                    v[i].b=0;
                }
            }
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)cout<<ara[i][j];
            cout<<endl;
        }
    }
}
