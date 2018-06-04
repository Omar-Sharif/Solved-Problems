#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
int vis[7];

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x>0 and y>0)vis[1]=1;
        if(x<0 and y>0)vis[2]=1;
        if(x<0 and y<0)vis[3]=1;
        if(x>0 and y<0)vis[4]=1;
    }
    int count=0;
    for(int i=1;i<=4;i++)count+=vis[i];
    cout<<count<<endl;

    return 0;
}
