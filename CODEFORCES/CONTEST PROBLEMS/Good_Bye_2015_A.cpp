#include<bits/stdc++.h>
using namespace std;
string s1=" of week";
string s2=" of month";
int main()
{
    int n;
    string s;
    while(cin>>n){
        getline(cin,s);
        if(s==s1){
            if(n==5 || n==6)
                cout<<53<<endl;
            else cout<<52<<endl;
        }
        if(s==s2){
            if(n==31)
                cout<<7<<endl;
            else if(n==30)
                cout<<11<<endl;
            else cout<<12<<endl;
        }
    }
}
