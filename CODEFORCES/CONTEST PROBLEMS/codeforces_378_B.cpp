#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
int ara[mx],ara1[mx],sum,sum1,n;

int main()
{
    while(cin>>n){
        sum=0,sum1=0;
        for(int i=1;i<=n;i++){
            cin>>ara[i]>>ara1[i];
            sum+=ara[i];
            sum1+=ara1[i];
        }
        int mx1,mxx,k=0,a=sum,b=sum1;
        mx1=abs(sum-sum1);

        for(int i=1;i<=n;i++){
            a=(sum-ara[i]+ara1[i]);
            b=(sum1-ara1[i]+ara[i]);
            mxx=abs(a-b);
            if(mxx>mx1){
                mx1=mxx;
                k=i;
            }
        }
        cout<<k<<endl;
    }
}

