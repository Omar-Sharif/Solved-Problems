#include<bits/stdc++.h>
using namespace std;

long long n,k;
string s;

int check(string ss)
{
    int count=0;
    for(int i=0;i<n-1;i++){
        string ssz="";
        ssz+=s[i];
        ssz+=s[i+1];
       if(ss==ssz)count++;
        ssz.clear();
   }
   return count;
}
int main()
{
   cin>>n;
   cin>>s;
   string ans="";
   int mx=0;
   for(int i=0;i<n-1;i++){
        string ss="";
        ss+=s[i];
        ss+=s[i+1];
       // cout<<ss<<' '<<check(ss)<<' '<<mx<<endl;
        if(check(ss)>mx){
                ans=ss;
                mx=check(ss);
        }
        ss.clear();
   }
   cout<<ans<<endl;
}

