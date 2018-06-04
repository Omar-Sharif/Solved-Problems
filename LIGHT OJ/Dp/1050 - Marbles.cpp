#include<bits/stdc++.h>
using namespace std;

double dp[510][510];
int vis[510][510];

double optimal(int r,int b,int c,double p)
{
    if(vis[r][b]){
        return dp[r][b]*p;
    }

    double s1=0,s2=0;
    double p1=double(r)/double(r+b),p2=double(b)/double(r+b);
    if(r==0) return p;
    if(b==0) return 0;

    if(c%2==1) s1=optimal(r,b-1,c+1,1);
    else{
        s1=optimal(r-1,b,c+1,p1);
        s2=optimal(r,b-1,c+1,p2);
    }

    vis[r][b]=true;
    dp[r][b]=(s1+s2);
    return dp[r][b]*p;
}

int main()
{
    int t,cs=0;
    double r,b,s;
    scanf("%d",&t);
    memset(dp,0,sizeof dp);
    memset(vis,0,sizeof vis);

    while(t--){
        scanf("%lf %lf",&r,&b);
        s=optimal(r,b,0,1);
        printf("Case %d: %.09lf\n",++cs,s);
    }
}
