#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
map<lli,int>my;

int main()
{
    lli a,b,c,n,x,count=0;
    cin>>a>>b>>c;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>b and x<c)count++;
    }
    cout<<count<<endl;

}
