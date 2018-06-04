#include<bits/stdc++.h>
using namespace std;

#define mx 200010
int ara[mx],tt[mx],lft[mx],rgt[mx],b[110];

int main()
{
    int n,qu,m;
    cin>>n>>qu>>m;

    for(int i=1;i<=n;i++)scanf("%d",&ara[i]);
    for(int i=1;i<=qu;i++)scanf("%d %d %d",&tt[i],&lft[i],&rgt[i]);
    for(int i=1;i<=m;i++)scanf("%d",&b[i]);

    for(int i=qu;i>=1;i--){
        for(int j=1;j<=m;j++){
            int t=tt[i],l=lft[i],r=rgt[i];
            if(b[j]>=l and b[j]<=r){
                if(t==1){
                    if(b[j]==l)b[j]=r;
                    else b[j]--;
                }
                else b[j]=r+l-b[j];
            }
        }
    }
    for(int i=1;i<=m;i++)
        printf("%d ",ara[b[i]]);
}
