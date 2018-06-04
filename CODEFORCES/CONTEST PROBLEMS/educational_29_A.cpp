#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;;
    cin>>t;
    string s="",s1;
    while(t>0){
        int x=t%10;
        t/=10;
        if(x==0 and c==0)continue;
        c++;
        s+=x+'0';
    }
    s1=s;
    //cout<<s<<' '<<s1<<endl;
    reverse(s.begin(),s.end());
    if(s==s1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
