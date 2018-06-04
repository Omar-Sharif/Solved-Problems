#include<bits/stdc++.h>
using namespace std;

int l,m;
string s,s1,s2;

int check(int x)
{
    int count=1;
    for(int i=x+1;i<l;i++){
        if(s[i]==s[x])count++;
        else break;
    }
    return count;
}
int check2(int x)
{
    int flag=0;
    if(x<l-3)if((s1[x]==s1[x+1])and (s1[x+2]==s1[x+3]))flag=1;
    return flag;
}
int main()
{
    while(cin>>s){
        l=s.length();
        for(int i=0;i<l;){
           m=check(i);
           if(m==1)s1+=s[i];
           else{
            s1+=s[i];
            s1+=s[i];
           }
           i+=m;
        }

        l=s1.length();
        for(int i=0;i<l;){
            m=check2(i);
            if(m==1){
                s2+=s1[i];
                s2+=s1[i+1];
                s2+=s1[i+2];
                i+=4;
            }
            else{
                s2+=s1[i];
                i++;
            }
        }
        cout<<s2<<endl;
        s.clear();s1.clear();s2.clear();
    }
}
