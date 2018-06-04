#include<bits/stdc++.h>
using namespace std;

vector<long long>v,v1;
long long m,n,i,j;

int main()
{
    while(cin>>n)
    {
        for(int i=0;i<n;i++){
            cin>>j;
            v.push_back(j);
        }

        m=0;

        for(int i=n-1;i>=0;i--){
            j=m-v[i]+1;
            if(j<=0)j=0;
            v1.push_back(j);
             m=max(m,v[i]);
        }
        reverse(v1.begin(),v1.end());

        for(int i=0;i<v1.size();i++){
            if(i==v1.size()-1)cout<<v1[i]<<endl;
            else cout<<v1[i]<<' ';
        }

        v.clear();v1.clear();
    }
}

