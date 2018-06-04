#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    while(cin>>n){
        if(n<0)
            break;
        string s;
        if(n==0)
            cout<<0<<endl;
        else{
            while(n>0){
                s+=(n%3)+'0';
                n=n/3;
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }

    }
    return 0;
}
