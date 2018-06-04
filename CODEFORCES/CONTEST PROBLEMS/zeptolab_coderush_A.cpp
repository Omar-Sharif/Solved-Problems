#include<bits/stdc++.h>
using namespace std;

struct om_nim
{
    int t,h,m;
}ara[2010];

bool vis[3000];

int main()
{
    int n,hei;
    while(cin>>n>>hei)
    {
        int a,b,c;
        om_nim x;
        for(int i=1;i<=n;i++){
            cin>>a>>b>>c;
            ara[i].t=a;
            ara[i].h=b;
            ara[i].m=c;

        }
        memset(vis,0,sizeof(vis));

        int count=0,count1=0,count2=0;

        int pos=1;
        int tempi,mx=0;
        int height=hei;
        while(1)
        {
            mx=0,tempi=0;
            for(int i=1;i<=n;i++){
                   // cout<<vis[i]<<' '<<ara[i].t<<' '<<ara[i].h<<' '<<ara[i].m<<endl;
                if(vis[i]==1 or ara[i].t==pos)continue;
                else{
                    if(ara[i].h<=height){
                        if(ara[i].m>mx){
                            tempi=i;
                            mx=ara[i].m;
                        }
                    }
                }
            }
            if(tempi!=0){
                height+=mx;
                count1++;
                vis[tempi]=1;
                pos^=1;
               // cout<<height<<' '<<tempi<<' '<<pos<<endl;
            }
            else break;
        }
        //cout<<count1<<endl;
        pos=0;
        memset(vis,0,sizeof(vis));
        height=hei;

        while(1)
        {
            mx=0,tempi=0;
            for(int i=1;i<=n;i++){
                    //cout<<vis[i]<<' '<<ara[i].t<<' '<<ara[i].h<<' '<<ara[i].m<<endl;
                if(vis[i]==1 or ara[i].t==pos)continue;
                else{
                    if(ara[i].h<=height){
                        if(ara[i].m>mx){
                            tempi=i;
                            mx=ara[i].m;
                        }
                    }
                }
            }
            if(tempi!=0){
                height+=mx;
                count2++;
                vis[tempi]=1;
                pos^=1;
               // cout<<height<<' '<<tempi<<' '<<pos<<endl;
            }
            else break;
        }
        //cout<<count2<<endl;
        cout<<max(count1,count2)<<endl;
    }
}
