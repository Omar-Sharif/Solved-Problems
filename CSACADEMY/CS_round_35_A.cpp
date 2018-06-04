#include<bits/stdc++.h>
using namespace std;

#define lli long long
map<char,int>my,my1;
int vis[500];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        my[ch]++;
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        my1[s[i]]++;
    }
    int sum=0;
     for(int i=0;i<s.size();i++){
        if(my[s[i]]>=my1[s[i]] or vis[s[i]]==1)continue;
        sum+=my1[s[i]]-my[s[i]];
        vis[s[i]]=1;
    }
    cout<<sum<<endl;
}
