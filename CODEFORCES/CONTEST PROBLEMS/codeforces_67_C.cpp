#include<bits/stdc++.h>
using namespace std;

vector<int>v,v1;

int check(int value)
{
    int low=0,high=v1.size()-1,mid,ans=1;
    while(low<=high){
        mid=(low+high)/2;
        if(v1[mid]==value)return ans;
        else if(v1[mid]>value)high=mid-1;
        else low=mid+1;
    }
    return ans=0;
}
int main()
{
    int a,b,n,l,h;
    cin>>a>>b;
    int x=sqrt(a);
    for(int i=1;i<=x;i++){
        if(a%i==0){
            v.push_back(a/i);
            v.push_back(i);
        }
    }
    x=sqrt(b);
    for(int i=1;i<=x;i++){
        if(b%i==0){
            v1.push_back(b/i);
            v1.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    cin>>n;
    while(n--){
        int flag=0;
        scanf("%d %d",&l,&h);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]>=l and v[i]<=h){
                int c=check(v[i]);
                if(c==1){
                    printf("%d\n",v[i]);
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)printf("-1\n");
    }

}
