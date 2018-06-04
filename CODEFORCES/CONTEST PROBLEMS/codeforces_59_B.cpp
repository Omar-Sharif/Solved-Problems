#include<bits/stdc++.h>
using namespace std;

int ara[110],n,k;

int check(int v,int j)
{
    int c=j;
    for(int i=j+1;i<=n;i++){
        if(ara[i]!=v)break;
        c=i;
    }
    return c;
}

int main()
{

    while(cin>>n>>k){
        for(int i=1;i<=n;i++)cin>>ara[i];

        int flag,count=0;
        while(1){
            flag=0;
            for(int i=1;i<=n;i++){
                if(ara[i]==k) continue;
                int x=check(ara[i],i);
                ara[x]++;
                i=x;
                flag=1;
            }
            if(flag==0) break;
            count++;
        }
        cout<<count<<endl;
    }
}
