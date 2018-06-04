#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

lli ara[mx],n,x,y,l,c1=0,c2=0;

lli bi(int i)
{
    lli low=i,high=n,mid;

    while(low<=high and c1==0){
        mid=(low+high)/2;
        if((ara[mid]-ara[i])==x)c1=1;
        else if((ara[mid]-ara[i])>x)high=mid-1;
        else low=mid+1;
    }
    low=i;high=n;

    while(low<=high and c2==0){
        mid=(low+high)/2;
        if((ara[mid]-ara[i])==y)c2=1;
        else if((ara[mid]-ara[i])>y)high=mid-1;
        else low=mid+1;
    }
}

int main()
{
    while(cin>>n>>l>>x>>y)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];

        for(int i=1;i<=n;i++){
            bi(i);
        }

        if(c1==1 and c2==1)cout<<0<<endl;
        else if(c1==0 and c2==1)cout<<1<<endl<<x<<endl;
        else if(c1==1 and c2==0)cout<<1<<endl<<y<<endl;
        else{
            int flag=0;
            for(int i=1;i<=n;i++){
                if(abs(ara[i]-x)==y){
                    flag=1;
                    break;
                }
            }
            if(flag==1)cout<<1<<endl<<x<<endl;
            else cout<<2<<endl<<x<<' '<<y<<endl;
        }
    }
}
