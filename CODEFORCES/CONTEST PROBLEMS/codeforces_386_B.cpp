#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    string s,s1;
    while(cin>>n>>s){
        a=0; b=n-2;
        if(n%2==0)a=1;

        while(b>=0){
            s1+=s[b];
            b-=2;
        }
        while(a<n){
            s1+=s[a];
            a+=2;
        }
        cout<<s1<<endl;
        s1.clear();
    }
}
