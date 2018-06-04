#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define lli long long

vector<pii>v;
map<lli,lli>my;
int n,ara[300010];

int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++)
            cin>>ara[i];

        for(lli i=1;i<=n;i++){
            if(my[ara[i]]!=0){
                cout<<my[ara[i]]<<' '<<i<<endl;
                v.push_back(pii(my[ara[i]],i));
                my.clear();
            }
            else my[ara[i]]=i;
        }

        if(v.size()==0)cout<<-1<<endl;
        else{
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
                cout<<v[i].first<<' '<<v[i].second<<endl;
        }
    }
}
