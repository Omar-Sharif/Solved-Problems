#include<bits/stdc++.h>
using namespace std;

int ara[1100];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>ara[i];
    int count=0;
    for(int i=1;i<n;i++){
        int x=ara[i]%10;
        int y=ara[i+1]/10;
        if(x!=y)count++;
    }
    cout<<count<<endl;
}
