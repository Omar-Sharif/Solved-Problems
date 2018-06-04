#include<bits/stdc++.h>
using namespace std;

int ara[100010];
vector<int>v;
int  main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        sum+=abs(ara[i]);
    }
    int f=0;
    for(int i=n;i>=1;i--){
        if(ara[i]<0 and f==0){
            f=1;
            v.push_back(i);
        }
        if(ara[i]>0 and f==1){
            f=0;
            v.push_back(i);
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
}
