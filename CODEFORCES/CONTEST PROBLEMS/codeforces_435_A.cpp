#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int ara[110];
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    int count=0,count1=0;
    for(int i=1;i<=n;i++){
        if(ara[i]==x)count++;
        if(ara[i]<x)count1++;
    }
    //cout<<count<<' '<<count1<<endl;
    int mn=count+(x-count1);
    cout<<mn<<endl;
}
