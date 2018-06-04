#include<bits/stdc++.h>
using namespace std;

int ara[1010];
int main()
{
    int n,m,k,x,count=0;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>x;
        ara[x]=1;
    }
    for(int i=1;i<=1000;i++){
        ara[i]+=ara[i-1];
        if(i>=k and ara[i]-ara[i-k]+m>=k)count++;
    }
    cout<<count<<endl;
}
