#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100000
vector<int>v;
int main()
{
    string s;
    int n;
    while(cin>>n){
        cin>>s;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B')sum+=1;
            else{
                if(sum!=0)v.push_back(sum);
                sum=0;
            }
        }
        if(sum!=0)v.push_back(sum);
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1)cout<<v[i]<<endl;
            else cout<<v[i]<<' ';
        }
        v.clear();
    }
}
