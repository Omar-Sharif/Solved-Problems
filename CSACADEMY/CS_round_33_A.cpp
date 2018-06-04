#include<bits/stdc++.h>
using namespace std;
#define mx 100010
#define lli long long

int main()
{
    int n,x[1010],y[1010];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    cout<<(x[n]-x[1])*(y[n]-y[1])<<endl;
}
