#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010],value[100010];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    lli n,k,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara+1,ara+n+1,cmp);
    lli count=0;
    for(int i=1;i<=n;i++){
        count+=(ara[i]/2);
    }
    if(count<k)cout<<-1<<endl;
    else{
        lli ans=0,ans1=0;
        for(int i=1;i<=n;i++){
            lli v=min(ara[i],(k-1)*2+1);
            if(v%2==0)v--;
            //cout<<k<<' '<<v<<endl;
            k-=v/2;
            ans+=v;
        }
        cout<<ans+k<<endl;
    }

}

