#include<bits/stdc++.h>
using namespace std;

int ara[1000100];
int alive[1000100];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    int mx=n-ara[n];
    for(int i=n-1;i>=1;i--){
        if(i>=mx)alive[i]=1;
        int z=i-ara[i];
        mx=min(z,mx);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(alive[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
}
