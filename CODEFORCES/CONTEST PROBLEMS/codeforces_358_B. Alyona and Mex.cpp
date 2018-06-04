#include<bits/stdc++.h>
using namespace std;

int ara[100010];
int main()
{
    int n,v;
    while(cin>>n){
        for(int i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        v=1;

        for(int i=0;i<n;i++){
            if(ara[i]>=v)v++;
        }
        cout<<v<<endl;
    }
}
