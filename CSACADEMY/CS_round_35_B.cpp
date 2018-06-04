#include<bits/stdc++.h>
using namespace std;

int ara[100010],value[10010];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }
    int x=1,y=1,v=1;
    for(int i=2;i<=n;i++){
        //cout<<ara[i]<<' '<<ara[i-1]<<endl;
        if(ara[i]<ara[i-1]){
            y=i;
            v++;
        }
        else{
            //cout<<x<<' '<<y<<' '<<i<<endl;
            for(int j=y;j>=x;j--){
                value[j]=v;
            }
            v=1;
            x=i;
            y=i;
        }
    }
    for(int j=y;j>=x;j--){
        value[j]=v;
    }
    for(int i=1;i<=n;i++)cout<<value[i]<<' ';
}
