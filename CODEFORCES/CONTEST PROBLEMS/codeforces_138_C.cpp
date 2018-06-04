#include<bits/stdc++.h>
#include<string.h>
using namespace std;

vector<string>my;
string s;

int check(int p,int dd)
{
    vector<char>vv;
    int pos=p;
    for(int i=p;i>=dd;i--){
        if(s[i]==')' or s[i]==']')vv.push_back(s[i]);
        else{
            if(vv.size()==0)break;
            char c=vv.back();vv.pop_back();
            if((c==')' and s[i]=='(') or (c==']' and s[i]=='[')){
                pos=i;
            }
            else break;
        }
    }
    if(pos!=p){
        string ss="";
        for(int i=pos;i<=p;i++)ss+=s[i];
        my.push_back(ss);
    }
}

int check1(int p,int dd)
{
    vector<char>vv;
    int pos=p;
    for(int i=p;i<=dd;i++){
        if(s[i]=='(' or s[i]=='[')vv.push_back(s[i]);
        else{
            if(vv.size()==0)break;
            char c=vv.back();vv.pop_back();
            if((c=='(' and s[i]==')') or (c=='[' and s[i]==']')){
                pos=i;
            }
            else break;
        }
    }
    if(pos!=p){
        string ss="";
        for(int i=p;i<=pos;i++)ss+=s[i];
        my.push_back(ss);
    }
}

int checkforward()
{
    vector<char>v;
    int pos=0,pos1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='[')v.push_back(s[i]);
        else{
            if(v.size()==0){
                check(pos,pos1);
                pos1=pos;
                continue;
            }
            char c=v.back();v.pop_back();
            if((c=='(' and s[i]==')') or (c=='[' and s[i]==']')){
                pos=i;
            }
            else{
                check(pos,pos1);
                v.clear();
                pos1=pos;
            }
        }
    }
    check(pos,pos1);
}

int checkback()
{
    vector<char>v;
    int pos=s.size()-1,pos1=s.size()-1;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==')' or s[i]==']')v.push_back(s[i]);
        else{
            if(v.size()==0){
                check1(pos,pos1);
                pos1=pos;
                continue;
            }
            char c=v.back();v.pop_back();
            if((c==')' and s[i]=='(') or (c==']' and s[i]=='[')){
                pos=i;
            }
            else{
                check1(pos,pos1);
                v.clear();
                pos1=pos;
            }
        }
    }
    check1(pos,pos1);
}

int checkans()
{
    int ans=0;
    string a;
    for(int i=0;i<my.size();i++){
        string ss=my[i];
        int count=0;
        for(int j=0;j<ss.size();j++)if(ss[j]=='[')count++;
        if(count>ans){
            ans=count;
            a=ss;
        }
    }
    cout<<ans<<endl;
    if(ans)cout<<a<<endl;
}

int main()
{
    cin>>s;
    checkforward();
    checkback();
    checkans();

}
