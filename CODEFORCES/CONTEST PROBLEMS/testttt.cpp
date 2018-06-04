#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int flag=0;
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='a' and flag==1)break;
            if(s[i]=='a')continue;
            s[i]=s[i]-1;
            flag=1;
        }
        if(flag==0)s[l-1]='z';
        cout<<s<<endl;
    }
}
