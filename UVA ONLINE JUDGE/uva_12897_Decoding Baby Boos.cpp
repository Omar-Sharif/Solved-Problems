#include<bits/stdc++.h>
using namespace std;

map<char,char>my;
string s;

int main()
{
    int t,r,a,b;
    char x,y;
    cin>>t;

    while(t--){
        cin>>s;
        cin>>r;

        for(char i='A';i<='Z';i++){
            my[i]=i;
        }
        my['_']='_';

        while(r--){
            cin>>x>>y;
            for(char i='A';i<='Z';i++){
                if(my[i]==y)my[i]=x;
            }
        }

        for(int i=0;i<s.length();i++)
            s[i]=my[s[i]];
        cout<<s<<endl;
    }
}
