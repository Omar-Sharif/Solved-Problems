#include<bits/stdc++.h>
using namespace std;

map<int,int>pos,pos1;
int n,m,k;

int main()
{
    while(cin>>n>>m>>k)
    {
        int x,a,b,c,d;
        long long count=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            pos[i]=x;
            pos1[x]=i;
        }

        for(int i=1;i<=m;i++){
            cin>>x;
            a=pos1[x];
            if(a%k==0){
                count+=a/k;
            }
            else{
                count+=a/k+1;
            }
            c=a;
            if(a!=1)a--;
            b=pos[a];
           // cout<<a<<' '<<b<<' '<<c<<endl;
            pos1[b]=c;
            pos[c]=b;
           // cout<<pos1[b]<<' '<<pos[c]<<endl;
            pos[a]=x;
            pos1[x]=a;
            //cout<<pos1[x]<<' '<<pos[a]<<endl;
        }
        cout<<count<<endl;
    }
}

