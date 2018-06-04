#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    while(cin>>s){
        int l=s.length();
        for(int i=l-1;i>=0;i--){
            s1+=s[i];
        }
       // cout<<s1<<endl;
        cout<<s+s1<<endl;
    }
}
