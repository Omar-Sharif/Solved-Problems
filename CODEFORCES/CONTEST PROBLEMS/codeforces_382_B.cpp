#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long
long double ara[mx],ara1[mx];

int main()
{
    int n,n1,n2;
    while(cin>>n>>n1>>n2){
        for(int i=1;i<=n;i++)cin>>ara[i];

        sort(ara+1,ara+n+1);
        long double s1=0,s2=0,sum=0,sum1=0;
        int a,b;
        a=min(n1,n2),b=max(n1,n2);
        int c1=0,c2=0,i,j;
        for(i=n;i>=1;i--){
            if(c1>=a)break;
            sum+=ara[i];
            c1++;
        }
        //cout<<c1<<' '<<sum<<endl;
        for(j=i;j>=1;j--){
            if(c2>=b)break;
            sum1+=ara[j];
            c2++;
        }
        s1=(sum)/a+sum1/b;
        cout<<fixed<<setprecision(10)<<s1<<endl;
    }
}

