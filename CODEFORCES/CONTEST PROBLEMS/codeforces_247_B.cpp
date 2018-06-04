#include<bits/stdc++.h>
using namespace std;

int vis[10];
int ara[10][10];
long long sum=0;
int v[6];

/*int check(int x)
{
    v.push_back(x);
    vis[x]=1;
    int j=0;
    int mx=-1;
    int a,b,c,d,e;
    for(int i=1;i<=5;i++){
        if(vis[i]==1)continue;
        check(i);
        cout<<v.size()<<endl;
        a=v[0];b=v[1];c=v[2];d=v[3];e=v[4];
        cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
    }
    return 0;
}*/
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>ara[i][j];
        }
    }
    long long mx=0,s=0;
    int a,b,c,d,e;
    for(int i=0;i<5;i++){
        v[i]=i+1;
    }

    a=v[0];b=v[1];c=v[2];d=v[3];e=v[4];
    s=ara[a][b]+ara[b][a]+ara[b][c]+ara[c][b];
    s+=2*(ara[c][d]+ara[d][c])+2*(ara[d][e]+ara[e][d]);
    mx=max(s,mx);

    while(next_permutation(v,v+5)){
        a=v[0];b=v[1];c=v[2];d=v[3];e=v[4];
        s=ara[a][b]+ara[b][a]+ara[b][c]+ara[c][b];
        s+=2*(ara[c][d]+ara[d][c])+2*(ara[d][e]+ara[e][d]);
        mx=max(s,mx);
        s=0;
    }

    cout<<mx<<endl;
}
