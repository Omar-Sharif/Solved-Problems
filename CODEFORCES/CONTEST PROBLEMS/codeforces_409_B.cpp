#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2;
    cin>>s>>s1;

    int flag=0;

    for(int i=0;i<s.length();i++){
        char c;
        if(s[i]==s1[i]){
            c=s[i];
        }
        else if(s1[i]>s[i]){
                flag=1;
                break;
        }
        else{
            c=s1[i];
        }
        s2+=c;
    }
    if(flag==1){
        cout<<-1<<endl;
    }
    else cout<<s2<<endl;
}
