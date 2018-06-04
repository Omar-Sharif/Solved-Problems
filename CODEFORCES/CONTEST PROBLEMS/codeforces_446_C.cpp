#include<bits/stdc++.h>
using namespace std;

int ara[2010];
int n;

int check()
{
    int flag=100000000;
    for(int i=1;i<=n;i++){
        int y=ara[i];
        for(int j=i;j<=n;j++){
            y=__gcd(y,ara[j]);
            //cout<<y<<endl;
            if(y==1){
                int x=j-i;
                flag=min(flag,x);
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int x=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]==1)x++;
    }
    int f=check();
    if(f==100000000)cout<<-1<<endl;
    else{
        if(x>=1)cout<<n-x<<endl;
        else cout<<f+(n-1)<<endl;
    }
}
