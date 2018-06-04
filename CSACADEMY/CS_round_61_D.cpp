#include<bits/stdc++.h>
using namespace std;

int ara[100010];

int main()
{
    int n,v1=0,v2=0,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }

    temp=0;
    for(int i=1;i<=n;i++){
        if(temp>=ara[i]){
            temp=ara[i]+1;
            v1++;
        }
        else temp=ara[i];
    }

    temp=ara[n];
    for(int i=n-1;i>=1;i--){
        //cout<<temp<<' '<<ara[i]<<endl;
        if(temp<=ara[i]){
            temp=ara[i]-1;
            v2++;
        }
        else temp=ara[i];
    }
    //cout<<v1<<' '<<v2<<endl;
    cout<<min(v1,v2)<<endl;
}
