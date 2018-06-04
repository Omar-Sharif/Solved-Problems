#include<bits/stdc++.h>
using namespace std;

map<int,int>my;
vector<int>vec[100010];
int ara[100010],ara1[100010];
int main()
{
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            scanf("%d",&ara[i]);
            ara1[i]=ara[i];
        }
        sort(ara+1,ara+n+1);

        int idx=0;
        for(int i=1;i<=n;i++){
            if(my[ara[i]]==0)my[ara[i]]=++idx;
            vec[my[ara[i]]].push_back(i);
        }

        int count=0,l,h,x,y;
        for(int i=1;i<=n;i++){
            x=my[ara1[i]];
            y=vec[x].size();
            l=vec[x][0];h=vec[x][y-1];
            if(i<l or i>h)count++;
        }
        if(count==2 or count==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
