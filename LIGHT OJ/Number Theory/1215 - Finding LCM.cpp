#include<bits/stdc++.h>
using namespace std;

#define mx 1000010
#define lli long long
vector<int>v;
bool vis[mx];

void seive()
{
    vis[1]=1;
    for(int i=2;i<mx;i+=2)vis[i]=1;

    for(int i=3;i<=sqrt(mx);i+=2){
        if(vis[i]==1)continue;
        for(int j=i*i;j<mx;j+=2*i){
            vis[j]=1;
        }
    }
    v.push_back(2);

    for(int i=3;i<mx;i+=2){
        if(vis[i]==0)v.push_back(i);
    }
   // cout<<v.size()<<endl;
}

lli check(lli n,lli x)
{
    lli sm=1;
    while(n%x==0){
        sm*=x;
        n/=x;
    }
    return sm;
}

int main()
{
    seive();
    int t,cs=0;
    scanf("%d",&t);

    while(t--){
        lli a,b,c,l;
        scanf("%lld %lld %lld",&a,&b,&l);

        lli sum=1,x=l;
        int flag=0;

        for(int i=0;i<v.size();i++){
            lli p=check(a,(lli)v[i]);
            lli q=check(b,(lli)v[i]);
            lli r=check(l,(lli)v[i]);

           // cout<<i<<' '<<v[i]<<' '<<p<<' '<<q<<' '<<r<<endl;
            if(max(p,q)>r){
                flag=1;
                break;
            }
            else if(r>max(p,q)){
                sum*=r;
            }
            if(x%v[i]==0){
                while(x%v[i]==0)x/=v[i];
            }
        }

        printf("Case %d: ",++cs);
        if(flag==1)printf("impossible\n");
        else{
            if(x!=1)sum*=x;
            printf("%lld\n",sum);
        }
    }
}
