#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
lli ara[20],ara1[20];

lli check(int init,lli v)
{
    lli mxx=0;
    lli m=v/14;
    lli n=v%14;

    for(int i=1;i<=14;i++)ara1[i]+=m;

    lli count=1;
    while(count<=n){
        lli c=init+count;
        if(c>14)c-=14;
        ara1[c]+=1;
        count++;
    }
    for(int i=1;i<=14;i++){
        if(ara1[i]%2==0)mxx+=ara1[i];
    }
    return mxx;
}
int main()
{
    lli mxx=0;

    for(int i=1;i<=14;i++){
        cin>>ara[i];
    }

    for(int i=1;i<=14;i++){
        if(ara[i]>0){
            for(int j=1;j<=14;j++)ara1[j]=ara[j];
            lli v=ara1[i];
            ara1[i]=0;
            mxx=max(mxx,check(i,v));
        }
    }
    cout<<mxx<<endl;
}

