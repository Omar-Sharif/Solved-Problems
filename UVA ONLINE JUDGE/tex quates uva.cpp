#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int flag=0;
    while(getline(cin,s)){
        int x=s.length();
        for(int i=0;i<x;i++){
            if(flag==0&&s[i]=='"'){
                cout<<"``";
                flag=1;
            }
            else if(flag==1&&s[i]=='"'){
                cout<<"''";
                flag=0;
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
}
