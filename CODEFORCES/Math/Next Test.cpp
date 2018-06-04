#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        int x=ara[n-1];
        int ara1[x+1];
        for(int i=1;i<=x;i++)
            ara1[i]=0;
        for(int i=0;i<n;i++){
            ara1[ara[i]]=1;
        }
        int i=0;
        for(i=1;i<=x;i++)
        {
            if(ara1[i]==0)
                break;
        }
        cout<<i<<endl;
    }
}
