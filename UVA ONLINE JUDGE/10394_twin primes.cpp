#include<bits/stdc++.h>
#define n 50000001
using namespace std;
int ara[50000001];
void seive(int n)
{
    int i;
    int sq=sqrt(n);
    for(i=4;i<=n;i+=2)
        ara[i]=1;
    for(i=3;i<=sq;i++){
        if(ara[i]==0){
            for(int j=i*i;j<=n;j+=2*i)
                ara[j]=1;
        }
    }
}
int main()
{
    int s;
    seive(n);
    int ara1[n],ara2[100003],j=1,c=1;
    while(cin>>s){
            int y=2;
        for(int i=2;;i++){
            if(ara[i]==0){
                if(ara[i]-y==2){
                    ara2[c]=y;
                    ara2[c++]=ara1[j];
                    c++;
                }
                y=ara[i];
            }
            if(c-1==s)
                break;
        }
    }
}
