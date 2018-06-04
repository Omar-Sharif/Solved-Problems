#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v;
    cin>>n>>v;
    int k,s,flag,ara[n+1],m=0,w=1,count=0;
    for(int i=0;i<n;i++){
        cin>>k;
        flag=0;
        for(int j=0;j<k;j++){
            cin>>s;
            if(v>s){
                flag=1;
            }
        }
        if(flag==1){
            count++;
            ara[m]=w;
            m++;
        }
        w++;
    }
    cout<<count<<endl;

    for(int i=0;i<m;i++){
        if(i==m-1)
            cout<<ara[i]<<endl;
        else
            cout<<ara[i]<<' ';
    }
}
