#include<bits/stdc++.h>
using namespace std;

int ara[110],n;
int func(int i)
{
    if(ara[i]==i)return 0;
    else{
        for(int j=i+1;j<=n;j++){
            if(ara[j]==i){
                swap(ara[j],ara[i]);
                return 1;
            }
        }
    }
}
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&ara[i]);

        int count=0;
        for(int i=1;i<=n;i++){
            count+=func(i);
        }
        printf("Case %d: %d\n",++cas,count);
    }
}
