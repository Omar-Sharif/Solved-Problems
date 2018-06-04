#include<bits/stdc++.h>
using namespace std;

int ara[110];

int main()
{
    int n,p1,p2,p3,f=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];

    p1=1,p2=2,p3=3;
    for(int i=1;i<=n;i++){
        if(ara[i]==p3)f=1;
        if(ara[i]==p1) swap(p2,p3);
        else if(ara[i]==p2) swap(p1,p3);
    }
    if(!f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

