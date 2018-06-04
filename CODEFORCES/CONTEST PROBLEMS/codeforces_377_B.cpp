#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int ara[1000];

int main()
{
    int n,k,x;
    while(cin>>n>>k){
        for(int i=0;i<n;i++)
            cin>>ara[i];
        x=0;

        for(int i=1;i<n;i++){
            if(ara[i-1]+ara[i]<k){
                int y=k-(ara[i-1]+ara[i]);
                ara[i]+=y;
                x+=y;
            }
        }
        cout<<x<<endl;
        for(int i=0;i<n;i++)
            cout<<ara[i]<<' ';
    }
}

