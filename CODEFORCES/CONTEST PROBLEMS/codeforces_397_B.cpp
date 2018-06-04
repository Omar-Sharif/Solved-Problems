#include<bits/stdc++.h>
using namespace std;
map<char,int>my;

int check(char c)
{
    for(int i='a';i<c;i++){
        if(my[i]==0){
            return -1;
        }
    }
    return 0;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(check(s[i])==-1){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            my[s[i]]=1;
        }
    }
    cout<<"YES"<<endl;
}
