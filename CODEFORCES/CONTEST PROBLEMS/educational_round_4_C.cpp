#include<bits/stdc++.h>
using namespace std;

stack<char>st;
int main()
{
    string s;
    while(getline(cin,s)){
        int l=s.length();

        int count=0;
        for(int i=0;i<l;i++){
            if(s[i]=='<' or s[i]=='{' or s[i]=='[' or s[i]=='('){
                st.push(s[i]);
               }
            else{
                    //cout<<st.size()<<endl;
                if(st.size()==0){
                    cout<<"Impossible"<<endl;
                    return 0;
                }
                if(s[i]=='>' and st.top()!='<') count++;
                if(s[i]==')' and st.top()!='(') count++;
                if(s[i]=='}' and st.top()!='{') count++;
                if(s[i]==']' and st.top()!='[') count++;
                st.pop();
            }
        }
        if(st.size()!=0) cout<<"Impossible"<<endl;
        else cout<<count<<endl;
    }
}
