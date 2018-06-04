#include<bits/stdc++.h>
using namespace std;
long long ara[100010];

int main()
{
    int n,m;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>ara[i];
            while(ara[i]%2==0)ara[i]/=2;
            while(ara[i]%3==0)ara[i]/=3;
        }
        for(int i=0;i<n-1;i++){
            if(ara[i]!=ara[i+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }

}
