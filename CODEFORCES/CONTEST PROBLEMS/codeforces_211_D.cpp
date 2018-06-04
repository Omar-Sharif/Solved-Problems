#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 100010
#define lli long long

lli perso[mx],bike[mx],n,m,a;

pii check2(lli k,lli s)
{
    lli count=0,sum=0;
    for(int i=n-k,j=0;j<k and i<n;j++,i++){
        if(perso[i]>=bike[j]){
            count++;
            sum+=bike[j];
        }
        else{
            if(s+perso[i]>=bike[j]){
                s-=bike[j]-perso[i];
                sum+=perso[i];
                count++;
            }
           else break;
        }
    }
    sum-=s;
    if(sum<0)sum=0;
    pii p=pii(count,sum);
    return p;
}

int main()
{
    while(cin>>n>>m>>a){
        for(int i=0;i<n;i++)
            scanf("%d",&perso[i]);
        for(int i=0;i<m;i++)
            scanf("%d",&bike[i]);

        sort(perso,perso+n);
        sort(bike,bike+m);

        lli low=0,high=min(n,m),mid,ans=0,sum=0,x,y;
        pii c;

        while(low<=high){
            mid=(low+high)/2;
            c=check2(mid,a);
            x=c.first;y=c.second;
            if(x==mid){
                low=mid+1;
                ans=mid;
                sum=y;
            }
            else high=mid-1;
        }
        printf("%lld %lld\n",ans,sum);
    }
}
