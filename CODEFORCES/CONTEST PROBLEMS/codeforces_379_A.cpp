#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c1,c2;
    string s;
    while(cin>>n){
        cin>>s;
        c1=0,c2=0;

        for(int i=0;i<n;i++){
            if(s[i]=='A')c1++;
            else c2++;
        }
        if(c1>c2)cout<<"Anton"<<endl;
        else if(c2>c1)cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
    }
}
