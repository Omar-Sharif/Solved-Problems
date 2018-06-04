#include<bits/stdc++.h>
using namespace std;
map<long ,bool>my;
int ara[1000010];
vector<long>v;
long long n,m;

int main()
{
    while(cin>>n>>m)
    {
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            my[ara[i]]=1;
        }
        long long sum=0;
        for(long i=1;;i++){
            if(my[i]==1)continue;
            sum+=i;
            //cout<<i<<endl;
            if(sum>m)break;
            else v.push_back(i);
        }
        cout<<v.size()<<endl;

        for(int i=0;i<v.size();i++){
            if(i==v.size()-1)cout<<v[i]<<endl;
            else cout<<v[i]<<' ';
        }
    }
}

