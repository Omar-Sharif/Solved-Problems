#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

#define N 1000000
#define p 80000

bool ara[N+10];
int ara1[p+5];
long long j;

void seive()
{
    long long i,n=sqrt(N);
    ara[1]=1;

    for(i=2;i<=N;i+=2)
        ara[i]=1;

    for(i=3;i<=n;i+=2){
         for(j=i*i;j<=N;j+=2*i)
            ara[j]=1;
    }
    j=0;

    for(i=2;i<=N;i++){
        if(ara[i]==0){
            ara1[j]=i;
            j++;
        }
    }
}
int main()
{
    seive();
    long long x,o,l,m,t,i,l2;
    cin>>t;

    while(t--){
        cin>>x;
        x++;
        int prime[p][2],sum=0,sum1=0;
        while(1){
            o=sqrt(x);
            l=x;
            l2=x;
            sum=0,sum1=0;
            while(l>0){
                sum+=l%10;
                l=l/10;
            }
            m=0;
            for(int i=0;ara1[i]<=o;i++){
                int flag=0,count=1;
                while(l2%ara1[i]==0){
                    l2/=ara1[i];
                    prime[m][0]=ara1[i];
                    prime[m][1]=count;
                    count++;
                    flag=1;
                }
                if(flag==1)
                m++;
            }
            if(l2!=1){
                prime[m][0]=l2;
                prime[m][1]=1;
                m++;
            }
            long long sum2,u;
            for(i=0;i<m;i++){
                    sum2=0;
                    u=prime[i][0];
                while(u>0){
                    sum2+=u%10;
                    u=u/10;
                }
                sum1+=sum2*prime[i][1];
            }
            if(sum==sum1){
                cout<<x<<endl;
                break;
            }
            else{
                x++;
            }
        }
    }
  return 0;
}
