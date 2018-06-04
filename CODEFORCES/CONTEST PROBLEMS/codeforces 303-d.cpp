#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    long n,t;
    while(scanf("%ld",&n)!=EOF){
        long ara[n],count=1,sum=0;
        for(int i=0;i<n;i++)
            scanf("%ld",&ara[i]);
        sort(ara,ara+n);
        sum=ara[0];
        for(int i=1 ;i<n;i++){
            if(sum<=ara[i]){
                sum+=ara[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}
