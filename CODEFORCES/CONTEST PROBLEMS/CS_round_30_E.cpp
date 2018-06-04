#include<bits/stdc++.h>
using namespace std;

vector<string>v;
string s,ss;
int check(string a,string b)
{
    int f=1;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            f=0;
            break;
        }
    }
    return f;
}

bool cmp(string a,string b)
{
    return a.size()<b.size();
}

int main()
{
    int n,k,ans=-1;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size()-k;i++){
        int f=0,count=1;
        for(int j=i+1;j<v.size();j++){
            f=check(v[i],v[j]);
            if(f==0)break;
            count++;
            if(count==k){
                ans=v[j].size();
                break;
            }
        }
        if(count==k)break;
    }
    cout<<ans<<endl;
}
