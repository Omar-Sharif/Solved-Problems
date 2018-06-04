#include<bits/stdc++.h>
using namespace std;
int main()
{
    int siz;
    string s,s2;
    while(cin>>siz){
        cin>>s;
        int flag=1;
        for(int i=0;i<siz;i++){
            if((s[i]>='A'&&s[i]<='Z')){
                    s[i]=s[i]+32;
            }
                    int flag1=1;
                for(int j=0;j<s2.length();j++){
                    if(s[i]==s2[j]){
                        flag1=0;
                        break;
                    }
                }
            if(flag1==1)
                s2+=s[i];
        }
        if(s2.length()<26)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
