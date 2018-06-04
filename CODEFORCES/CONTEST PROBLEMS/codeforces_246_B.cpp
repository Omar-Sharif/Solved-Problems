#include<bits/stdc++.h>
using namespace std;
int ara[100010];

struct football
{
    int home,away,count,home1,away1;
}f[100010];
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>f[i].home>>f[i].away;
        ara[f[i].home]++;
    }

    for(int i=1;i<=n;i++){
        f[i].home1=n-1;
        //cout<<f[i].home1<<' '<<ara[i]<<endl;
        f[i].home1+=ara[f[i].away];
        f[i].away1=2*(n-1)-f[i].home1;
    }

    for(int i=1;i<=n;i++){
        cout<<f[i].home1<<' '<<f[i].away1<<endl;
    }
}
