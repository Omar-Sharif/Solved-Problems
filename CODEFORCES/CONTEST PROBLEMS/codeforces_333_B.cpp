#include<bits/stdc++.h>
using namespace std;

int ara[100010];

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
            cin>>ara[i];

        int ma=ara[1],mi=ara[1],pos=1,value=ara[1],start=0,ans=0,count=0,c;
        int flag=1;
        for(int i=1;i<=n;i++){
            if(ara[i]==value){
                count++;
                continue;
            }
            ma=max(ma,ara[i]);
            mi=min(mi,ara[i]);

            if(ma-mi<=1)count++;
            else{
                ans=max(ans,count);
                count=i-start+1;
                ma=max(value,ara[i]);
                mi=min(value,ara[i]);
            }
            value=ara[i];
            start=i;
        }
        ans=max(ans,count);
        cout<<ans<<endl;
    }
}
