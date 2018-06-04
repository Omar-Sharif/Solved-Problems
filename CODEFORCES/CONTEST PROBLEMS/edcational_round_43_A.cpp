#include<bits/stdc++.h>
using namespace std;
#define mx 100010
#define lli long long

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt0=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1')cnt++;
        else cnt0++;
    }
    if(cnt>0){
        cout<<1;
        for(int i=1;i<=cnt0;i++)cout<<0;
        cout<<endl;
    }
    else cout<<s<<endl;
}
