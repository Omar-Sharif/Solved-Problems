#include<bits/stdc++.h>
using namespace std;
#define max 1500010

struct my
{
    long long u;
    int x;
    my();
    my(long long a, int b){
        u=a; x=b;
    }
    bool operator <(const my &p)const{return u>p.u;}
};

long long ara[max];
bool vis[max];
bool vis1[max];
priority_queue<my>source;
int n,k,q;

int func1(int a)
{
    //cout<<source.size()<<' '<<k<<endl;
    if(source.size()==k){
        my m=source.top();
        //cout<<m.u<<' '<<m.x<<' '<<a<<' '<<ara[a]<<endl;
        if(m.u<ara[a]){
            source.pop();
            my m1(ara[a],a);
            //m1.u=ara[a];m1.x=a;
            source.push(m1);
            vis[a]=1;
            //cout<<a<<' '<<m.x<<endl;
            vis1[a]=1;
            vis1[m.x]=0;
        }
        }
        else{
            //cout<<ara[a]<<' '<<a<<endl;
            my m1(ara[a],a);
            //m1.u=ara[a];m1.x=a;
            source.push(m1);
            vis[a]=1;
            vis1[a]=1;
        }
}

int main()
{

    while(cin>>n>>k>>q)
    {
        int id,a;
        for(int i=1;i<=n;i++)cin>>ara[i];

        for(int i=1;i<=q;i++){
            cin>>id>>a;
            if(id==1){
               func1(a);
            }
            else{
                if(vis[a]==1){
                    if(vis1[a]==1)cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                  //  func1(a);
                }
            }
        }
    }
}
