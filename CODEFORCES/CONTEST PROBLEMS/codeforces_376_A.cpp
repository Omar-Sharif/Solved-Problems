#include<bits/stdc++.h>
using namespace std;
map<char,int>my;

int main()
{
    int c=0;
    for(char i='a';i<='z';i++)
            my[i]=++c;
    string s;

    while(cin>>s){
        c=1;
        int count=0,x;
        for(int i=0;i<s.length();i++){
            x=my[s[i]];
          //  cout<<x<<' '<<c<<' '<<abs(x-c)<<endl;
            if(abs(x-c)>13)count+=26-abs(x-c);
            else count+=abs(x-c);
            c=x;
        }
        cout<<count<<endl;
    }
}
