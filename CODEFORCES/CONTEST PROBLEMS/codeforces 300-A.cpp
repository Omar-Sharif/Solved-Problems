#include<bits/stdc++.h>
using namespace std;
vector<string>v[100];
int main()
{
    string s,s1,s2;
    while(cin>>s){
        s1="CODEFORCES";
        int l=s.length();
        int count=0,j=0,i=0,k=0;
        if(l<10)cout<<"NO"<<endl;
        else{
            for(i=0;i<l;i++){
                if(s[i]==s1[j]){
                        s2+=s1[j];
                    j++;
                    count++;
                }
                else break;
            }
            i=l-10+count;
            for(j=i;j<l;j++)s2+=s[j];
        //cout<<s2<<endl;
            if(s2==s1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
       s2.clear();
    }
}
