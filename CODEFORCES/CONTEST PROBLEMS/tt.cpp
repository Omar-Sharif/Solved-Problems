#include<bits/stdc++.h>
#define PI acos(-1)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define ull unsigned long long
#define mem(a,b) memset(a,b,sizeof(a))
#define MX 200005
#define MXX -1
#define  s second
#define f first
#define mod 1000000007
#define inf 1000000007
#define eps 1e-15
//int ex[]={1,-1,0,0};
//int wye[]={0,0,1,-1};
using namespace std;
int n,q,m,a[MX],b[105],t[MX],l[MX],r[MX];
int main()
{
    fast();
    scanf("%d%d%d",&n,&q,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=q;i++) scanf("%d%d%d",&t[i],&l[i],&r[i]);
    for(int i=1;i<=m;i++) scanf("%d",&b[i]);
    for(int i=q;i>=1;i--){
        for(int j=1;j<=m;j++){
            if(b[j]>=l[i] && b[j]<=r[i]){
                if(t[i]==1){
                    if(b[j]==l[i]) b[j]=r[i];
                    else b[j]--;
                }
                else{
                    b[j]=r[i]-(b[j]-l[i]);
                }
            }
        }
    }
    for(int i=1;i<=m;i++) printf("%d ",a[b[i]]);
    return 0;
}
