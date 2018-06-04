#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;

    while(cin>>s>>s1){
            string s2,s3;
            int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' and flag==0) continue;
            else{
                s2+=s[i];
                flag=1;
            }
        }


         for(int i=0;i<s1.length();i++){
            if(s1[i]=='0' and flag==0) continue;
            else{
                s3+=s1[i];
                flag=1;
            }
        }

        //cout<<s2<<' '<<s3<<endl;
        if(s2.length()>s3.length())cout<<'>'<<endl;
        else if(s2.length()<s3.length()) cout<<'<'<<endl;
        else{
        if(s2<s3)cout<<'<'<<endl;
        else if(s2>s3)cout<<'>'<<endl;
        else cout<<'='<<endl;
        }

        //cout<<s2<<' '<<s3<<endl;
    }
}
