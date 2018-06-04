#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF){
        long ara[n],ara1[n],count;

        for(int i=0;i<n;i++){
            scanf("%ld",&ara[i]);
            scanf("%ld",&ara1[i]);
        }
        if(n>=2)
        count=2;
        else
            count=1;
        long max=ara[0];
        for(int i=1;i<n-1;i++){
            if(ara[i]-ara1[i]>max){
                count++;
                max=ara[i];
            }
            else if(ara[i]+ara1[i]<ara[i+1]){
                count++;
                max=ara[i]+ara1[i];
            }
            else{
                max=ara[i];
            }
        }
        cout<<count<<endl;

    }

}
