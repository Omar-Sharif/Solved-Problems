#include<bits/stdc++.h>
using namespace std;

int ara[100010],c[100010],mara[100010];

int main()
{
    int n,m,k;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        mara[i]=ara[i]%m;
    }
    for(int i=1;i<=n;i++){
        c[mara[i]]++;
    }
    int x=-1;
    for(int i=1;i<=n;i++){
        if(c[mara[i]]>=k){
            x=mara[i];
            break;
        }
    }
    if(x==-1)cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        int count=0;
        for(int i=1;i<=n and count<k;i++){
            if(mara[i]==x){
                cout<<ara[i]<<' ';
                count++;
            }
        }
    }
}
