#include<bits/stdc++.h>
using namespace std;
int ara[1000];
#define N 10000
void sieve()
{
    int i;
    ara[1]=1;
    ara[2]=0;
    int sq=sqrt(N);
    for(i=4;i<=N;i+=2)
        ara[i]=1;
    for(i=3;i<=sq;i+=2){
        if(ara[i]==0){
            for(int j=i*i;j<=N;j+=2*i)
                ara[j]=1;
        }
    }
}

int main()
{
    sieve();
    int num;
    while(scanf("%d",&num)!=EOF){
        if(num==0)
            break;
            if(ara[num]==0){
                cout<<"no"<<endl;
            }
            else{
                int count=0;
               for(int i=1;i<=num/2+1;i++){
                    if(num%i==0)
                        count++;
               }
               count++;
               if(count%2==0)
                cout<<"yes"<<endl;
            }
    }
    return 0;
}
