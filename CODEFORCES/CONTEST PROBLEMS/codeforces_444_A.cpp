#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mxx 100010

int main()
{
    string s;
    cin>>s;
    int flag=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')flag=1;
        if(flag==1 and s[i]=='0')c++;
    }
    if(c>=6)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
