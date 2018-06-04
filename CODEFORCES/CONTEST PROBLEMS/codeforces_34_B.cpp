#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    int n,m,x;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<0)
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long sum=0;
        for(int i=0;i<m and i<v.size();i++){
                sum+=v[i];
        }
        cout<<abs(sum)<<endl;
    }
}
