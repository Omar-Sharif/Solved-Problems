#include<bits/stdc++.h>
using namespace std;
int ara[1010];
int vis[1010];
int pos,n,value=0;

int front_c(int a)
{
    int c=-1;
  //  cout<<"front "<<value<<endl;
   for(int i=a;i<=n;i++){
    if(vis[i]==1)continue;
   //  cout<<ara[i]<<' ';
        if(ara[i]<=value){
            vis[i]=1;
            value++;
            c=i;
            break;
        }
   }
  // cout<<endl;
   //cout<<c<<endl;
   return c;
}

int back_c(int b)
{
    int c=-1;
   // cout<<"back "<<value<<endl;
    for(int i=b;i>=1;i--){
        if(vis[i]==1)continue;
          //cout<<ara[i]<<' ';
        if(ara[i]<=value){
            vis[i]=1;
            value++;
            c=i;
            break;
        }
    }
   // cout<<endl;
  //  cout<<c<<endl;
    return c;
}

int main()
{
    while(cin>>n){
        value=0;
        int c=1,d;
        for(int i=1;i<=n;i++)cin>>ara[i];
        pos=1;

         memset(vis,0,sizeof(vis));
         int count=0;

         while(1){
            if(pos==1){
                d=front_c(c);
                if(d==-1){
                    pos=2;
                    d=back_c(c);
                    if(d!=-1)count++;
                }
                c=d;
                //cout<<pos<<' '<<c<<endl;
            }
            else{
                d=back_c(c);
                if(d==-1){
                    pos=1;
                    d=front_c(c);
                    if(d!=-1)count++;
                }
                c=d;
               // cout<<pos<<' '<<c<<endl;
            }
           if(c==-1)break;
        }
        cout<<count<<endl;
    }
}
