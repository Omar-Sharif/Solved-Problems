#include<bits/stdc++.h>
using namespace std;
int ara[300010];

int main()
{
    int n,k,a,b,x,y,mx=0,count;
    while(cin>>n>>k)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];

        a=0,b=0,mx=0,count=0;
        int j=1;
        for(int i=1;i<=n;i++){
            while(j<=n){
                if(ara[j]==0 and count+1<=k){
                    j++;
                    count++;
                }
                else if(ara[j]==0 and count+1>k)break;
                else if(ara[j]==1)j++;
            }
            x=j-i;
            if(x>mx){
                a=i;
                b=j;
                mx=x;
            }
            if(ara[i]==0)count--;
        }
        cout<<mx<<endl;
        for(int i=1;i<=n;i++){
            if(i>=a and i<b)cout<<1;
            else cout<<ara[i];
            if(i==n)cout<<endl;
            else cout<<' ';
        }

    }

}
