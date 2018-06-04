#include<bits/stdc++.h>
using namespace std;
int ara[100010];
long long sum,i,j,k,a,b,c;
int main()
{
    int n;
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara+1,ara+n+1);
    k=sum/n;
    j=sum%n;
    long long count=0;
    for(i=1;i<=n-j;i++){
        if(ara[i]<k)
            count+=k-ara[i];
    }

    for(a=i;a<=n;a++)
    {
        if(ara[a]<k+1)
            count+=k-ara[a]+1;
    }
    cout<<count<<endl;
}
