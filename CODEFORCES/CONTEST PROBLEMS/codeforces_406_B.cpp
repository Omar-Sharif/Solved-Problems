#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    int n,m,k,x;
    cin>>n>>m;
    int flag=1;
    while(m--){
        cin>>k;
        set<int>s;
        for(int i=0;i<k;i++){
            cin>>x;
            s.insert(abs(x));
        }
        if(s.size()==k)flag=0;
    }

    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

