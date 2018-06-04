#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int ara[1010],n,k;

int func(int x)
{
    int c=0,a=0,flag=0;
    for(int i=0;i<=n;i++){
        if(ara[i]+a<=x){
            a+=ara[i];
        }
        else{
            c++;
            a=0;
            if(a+ara[i]>x){
                flag=1;
                break;
            }
            i--;
        }
    }
    if(a!=0 and c!=0)c++;
    if(flag==1)c=10000000;
    return c;
}
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(int i=0;i<=n;i++)
            scanf("%d",&ara[i]);

        int low=1,high=10000000,mid,c,ans=0;

        while(low<=high)
        {
            mid=(low+high)/2;
            c=func(mid);
            if(c<=k+1){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }

        int flag=0,a=0,count=0;
        for(int i=0;i<=n;i++){
            if(ara[i]+a<=ans){
                if((n+1-i)==(k+1-count)){
                    a+=ara[i];
                    count++;
                    v.push_back(a);
                    a=0;
                    for(int j=i+1;j<=n;j++){
                        count++;v.push_back(ara[j]);
                    }
                    break;
                }
                a+=ara[i];
            }
            else{
                count++;
                v.push_back(a);
                a=0;
                i--;
            }
        }
        if(a!=0 and v.size()!=k+1){
            v.push_back(a);count++;
        }

        printf("Case %d: %d\n",++cas,ans);
        for(int i=0;i<v.size();i++)
            printf("%d\n",v[i]);

        v.clear();
    }
}

