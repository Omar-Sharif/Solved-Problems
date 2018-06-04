#include<bits/stdc++.h>
using namespace std;

long long c[100010],d[100010],n,k;
map<int,int>my;

int main()
{
    while(cin>>n>>k)
    {
        long long a=0,b=0,m=1,sum=0,sum1=0;
        for(int i=1;i<=n;i++){
                cin>>c[i];
                a+=c[i];
        }
        for(int i=1;i<=k;i++){
                cin>>d[i];
                b+=c[d[i]];
                my[d[i]]=1;
        }
      // cout<<a<<' '<<' '<<b<<endl;
        sum=(a-b)*b;
        for(int i=1;i<=k;i++){
            sum1+=c[d[i]]*(b-c[d[i]]);
        }
       // cout<<sum1/2<<' '<<sum<<endl;

        for(int i=1;i<n;i++){
            if(my[i]==1)continue;
            else{
                int y=i+1;
                if(my[y]==1)continue;
                sum+=c[i]*c[y];
            }
        }
        if(my[1]==0 and  my[n]==0)sum+=c[1]*c[n];
        cout<<sum+(sum1/2)<<endl;
    }
}
