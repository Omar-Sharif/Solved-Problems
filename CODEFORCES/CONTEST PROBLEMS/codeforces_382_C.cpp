#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long
lli fibo[200];
void check()
{
    fibo[0]=1;fibo[1]=2;

    for(int i=2;i<=100;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        if(fibo[i]>5000000000000000000)break;
    }
}
int main()
{
    lli n;
    check();
    while(cin>>n){
        int ans=0;

        for(int i=0;;i++){
            if(fibo[i]>n)break;
            ans=i;
        }
        cout<<ans<<endl;
    }
}

