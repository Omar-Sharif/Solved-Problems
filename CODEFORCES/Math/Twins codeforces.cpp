#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int ara[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum=sum+ara[i];
        }
        int k=0,m=0,l=0;
        sort(ara,ara+n,greater<int>());
        for(int i=0;i<n;i++){
            k=k+ara[i];
            l=sum-k;
            m++;
            if(k>l)
                break;
        }
        cout<<m<<endl;
    }
    return 0;
}
