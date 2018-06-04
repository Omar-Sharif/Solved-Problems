#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

map<string,int>vis;

int main()
{
    int n,count=0;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        sort(s.begin(),s.end());
        string s1="";
        s1+=s[0];
        int k=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==s1[k])continue;
            else{
                k++;
                s1+=s[j];
            }
        }
        if(vis[s1]==0){
            count++;
            vis[s1]=1;
        }
        s1.clear();
    }
    cout<<count<<endl;
}
