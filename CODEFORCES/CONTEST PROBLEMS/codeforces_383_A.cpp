#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,c,d;
    while(cin>>n){
        if(n==0)cout<<1<<endl;
        else{
            c=n%4;
            if(c==1)d=8;
            if(c==2)d=4;
            if(c==3)d=2;
            if(c==0)d=6;
            cout<<d<<endl;
        }
    }
}
