#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int n,m,k;
map<int,int>my,ara;
vector<int>v1;
vector<pii>v;
int main()
{
    while(cin>>n>>m>>k){
        int x,y;
        for(int i=1;i<=n;i++)
            cin>>my[i];
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            v.push_back(pii(x,y));
            ara[my[x]]++;
            ara[my[y]]++;
        }

        int count=0;
        for(int i=0;i<m;i++){
            x=v[i].first;y=v[i].second;
            if(my[x]==my[y])continue;
            if(ara[my[x]]>=ara[my[y]]){
                    ara[my[x]]+=ara[my[y]]-1;
                    ara[my[y]]=0;
                    my[y]=my[x];
            }
            else{
                ara[my[y]]+=ara[my[x]]-1;
                ara[my[x]]=0;
                my[x]=my[y];
            }
            count++;
        }
        cout<<count<<endl;
        v.clear();my.clear();ara.clear();

    }
}
