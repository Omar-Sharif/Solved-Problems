#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
vector<pii>ara;

int main()
{
    int t,n;
    cin>>t;

    for(int c=1;c<=t;c++){
        scanf("%d",&n);
        int s,e,count=0,sum=0,x;


        for(int i=1;i<=n;i++){
            scanf("%d %d",&s,&e);
            ara.push_back(pii(s,-1));
            ara.push_back(pii(e,1));
        }
        x=ara.size();
        sort(ara.begin(),ara.end());
        for(int i=0;i<x;i++){
            sum-=ara[i].second;
            count=max(count,sum);
        }

        printf("Case %d: %d\n",c,count);
        ara.clear();
    }
}
