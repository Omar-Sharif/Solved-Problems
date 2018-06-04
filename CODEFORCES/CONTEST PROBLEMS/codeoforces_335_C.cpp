#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int n;
int main()
{
    while(cin>>n){
            int x,max=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            ara[x]=ara[x-1]+1;
            if(ara[x]>max)
                max=ara[x];
        }
        cout<<n-max<<endl;
    }
}
