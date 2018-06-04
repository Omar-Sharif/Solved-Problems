#include<bits/stdc++.h>
using namespace std;

map<string,int>my;
string s;

int main()
{
    int n;
    cin>>n;
    while(cin>>s)
    {
        if(my[s]==0)
            cout<<"OK"<<endl;
        else
            cout<<s<<my[s]<<endl;
        my[s]++;
    }
}
