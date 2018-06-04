#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    lli n,m,count;
    while(cin>>n>>m){
        count=0;

        while(1){
            if(n==0 or m==0)break;
            if(n==1 and m==1)break;
            if(n>=m){
                n-=2;
                m--;
            }
            else{
                m-=2;
                n--;
            }
            count++;
        }
        cout<<count<<endl;
    }
}
