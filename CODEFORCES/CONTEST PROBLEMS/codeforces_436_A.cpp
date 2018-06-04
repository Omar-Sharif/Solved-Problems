#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int vis[110];
map<int,int>my;
int main()
{
    int n,sum,x,count=0;;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(vis[x]==0){
            count++;
            vis[x]=1;
        }
        my[x]++;
    }
   // cout<<count<<endl;
    if(count!=2)cout<<"NO"<<endl;
    else{
        int c=0,v1,v2,c1,c2;
        for(int i=1;i<=100;i++){
            if(my[i]!=0 and c==0){
                    v1=i;
                    c1=my[i];
                    c=1;
            }
            else if(my[i]!=0 and c==1){
                    v2=i;
                c2=my[i];
            }
        }
        //cout<<c1<<' '<<c2<<endl;
        if(c1!=c2)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<v1<<' '<<v2<<endl;
        }
    }
}
