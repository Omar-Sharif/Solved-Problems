#include<bits/stdc++.h>
using namespace std;
map<int,bool>vis;

struct
{
    int mi1,mx1,c,c1;
}ara[1000010];
vector<int>my;
int main()
{
    int n,x;
    while(cin>>n)
    {
        int maxa=0,mina=INT_MAX;
        for(int i=1;i<=n;i++){

            cin>>x;
            if(vis[x]!=1){
                my.push_back(x);
            }
            vis[x]=1;
            ara[x].c++;
            ara[x].mx1=i;
            if(ara[x].mi1==0)ara[x].mi1=i;
            ara[x].c1=abs(ara[x].mx1-ara[x].mi1);
           // cout<<ara[x].c<<' '<<ara[x].mx1<<' '<<ara[x].mi1<<' '<<ara[x].c1<<endl;
        }
        int count=0;
        //cout<<mina<<' '<<maxa<<endl;
        int l1=0,l2=0,v=0,i;
        for(int j=0;j<my.size();j++){
            i=my[j];
            if(ara[i].c>count){
                count=ara[i].c;
                l1=ara[i].mi1;
                l2=ara[i].mx1;
                v=i;
            }
            else if(ara[i].c==count and ara[i].c1<ara[v].c1){
                v=i;
                l1=ara[i].mi1;
                l2=ara[i].mx1;
                v=i;
            }
        }
        cout<<l1<<' '<<l2<<endl;
    }
}
