#include<bits/stdc++.h>
using namespace std;

#define mx 300010
#define lli long long
lli ara[mx];

bool cmp(int a,int b)
{
    if(a>b)return true;
    else return false;
}
int main()
{
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,cmp);
        if(n==1)cout<<ara[0]<<endl;
        else{
            lli sum=ara[0]*n+ara[1]*n;
            lli k=1;
            for(int i=2;i<n;i++){
                sum+=ara[i]*(n-k);
                k++;
            }
            cout<<sum<<endl;
        }
    }
}
