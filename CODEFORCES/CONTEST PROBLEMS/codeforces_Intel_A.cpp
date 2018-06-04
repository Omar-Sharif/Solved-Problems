#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    while(cin>>t){
        cin>>s;
        if(t==24){
            if(s[0]>'2') s[0]='0';
            else if(s[0]>='0' and s[0]<='2'){
                if(s[1]>'3' and s[0]=='2')s[1]='0';
            }
            if(s[3]>'5') s[3]='0';
        }
        else{
            if(s[0]>'1' and s[1]=='0') s[0]='1';
            else if(s[0]>'1' and s[1]!='0')s[0]='0';
            else if(s[0]>='0' and s[0]<='1'){
                if(s[0]=='0' and s[1]=='0')s[1]='1';
                if(s[1]>'2' and s[0]=='1')s[1]='0';
            }
            if(s[3]>'5') s[3]='0';
        }
        cout<<s<<endl;
    }
}
