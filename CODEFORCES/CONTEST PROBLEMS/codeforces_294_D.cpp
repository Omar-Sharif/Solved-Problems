#include<bits/stdc++.h>
using namespace std;

#define lli long long
map<lli,int>mp[30],vis;
map<char,int>ara;
lli sum[100010],l;
string s;

lli check()
{
    lli ss=0,n1;
    for(int i=0;i<l;i++){
        int x=s[i]-'a';
        lli y=sum[i]-ara[s[i]];
        ss+=mp[x][y];
        mp[x][sum[i]]++;
    }
    return ss;
}

int main()
{
    for(char i='a';i<='z';i++)
        cin>>ara[i];
    cin>>s;l=s.size();

    sum[0]=ara[s[0]];
    for(int i=1;i<l;i++)
        sum[i]=sum[i-1]+ara[s[i]];
    cout<<check()<<endl;
}
