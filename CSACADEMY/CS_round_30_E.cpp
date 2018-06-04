#include<bits/stdc++.h>
using namespace std;

vector<string>v;
string s,ss;
int check(string a,string b)
{
    int f=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            f=1;
            break;
        }
    }
    cout<<a<<' '<<b<<' '<<f<<endl;
    return f;
}
int check1(int a,int b)
{
    cout<<a<<' '<<b<<endl;
    int f=1;
    for(int i=a;i<b and f==1;i++){
        for(int j=i+1;j<=b and f==1;j++){
            //cout<<i<<' '<<v[i]<<' '<<j<<' '<<v[j]<<endl;
            f=check(v[i],v[j]);
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
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    int f=0;
    for(int i=0;i<=v.size()-k;i++){
        f=check1(i,i+k-1);
        if(f==1){
          ans=v[i+k-1].size();
          break;
        }
    }
    cout<<ans<<endl;
}

