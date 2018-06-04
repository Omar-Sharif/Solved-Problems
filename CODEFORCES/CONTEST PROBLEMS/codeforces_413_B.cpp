#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<int,int>
#define mx 200010

vector<pii>v1,v2,v3;
int ara[mx],Front[mx],Back[mx],color[mx];
int n,m,c1,c2,c3,x,y,z;
bool vis[mx];

int check1()
{
    int s,i;
    for(i=c1;i<x;i++){
        int a=v1[i].second;
        if(vis[a]==1)continue;
        s=v1[i].first;
        vis[a]=true;
        break;
    }
    c1=i;
    if(c1>=x)return -1;
    else return s;
}
int check2()
{
    int s,i;
    for(i=c2;i<y;i++){
        int a=v2[i].second;
        if(vis[a]==1)continue;
        s=v2[i].first;
        vis[a]=true;
        break;
    }
    c2=i;
    if(c2>=y)return -1;
    else return s;
}
int check3()
{
    int s,i;
    for(i=c3;i<z;i++){
        int a=v3[i].second;
        if(vis[a]==1)continue;
        s=v3[i].first;
        vis[a]=true;
        break;
    }
    c3=i;
    if(c3>=z)return -1;
    else return s;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    for(int i=0;i<n;i++)cin>>Front[i];
    for(int i=0;i<n;i++)cin>>Back[i];

    cin>>m;
    for(int i=0;i<m;i++)cin>>color[i];

    for(int i=0;i<n;i++){
        if(Front[i]==1 or Back[i]==1){
            v1.push_back(pii(ara[i],i));
        }
        if(Front[i]==2 or Back[i]==2){
            v2.push_back(pii(ara[i],i));
        }
        if(Front[i]==3 or Back[i]==3){
            v3.push_back(pii(ara[i],i));
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());

    x=v1.size(),y=v2.size(),z=v3.size();
    c1=0,c2=0,c3=0;
    memset(vis,0,sizeof vis);
    for(int i=0;i<m;i++){
        if(color[i]==1)cout<<check1()<<' ';
        if(color[i]==2)cout<<check2()<<' ';
        if(color[i]==3)cout<<check3()<<' ';
    }
}

