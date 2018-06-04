#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++){
        string s,s1,s2;
        getline(cin,s);
        getline(cin,s1);
        if(s==s1)
            cout<<"Case "<<i<<": Yes"<<endl;
        else{
                int flag=0;
            for(int i=0;i<s.length();i++){
                if(s[i]==' '){
                    flag=1;
                }
                else
                    s2+=s[i];
            }
            if(flag==1&&s1==s2)
                cout<<"Case "<<i<<": Output Format Error"<<endl;
            else
                 cout<<"Case "<<i<<": Wrong Answer"<<endl;
        }
    }
    return 0;
}
