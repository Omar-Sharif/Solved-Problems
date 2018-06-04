#include<bits/stdc++.h>
#define pi 3.1415926536
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int p,ara[n];
        double sum=0;
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<int>());
        for(int j=0;j<n;j++){
           int k=j+1;
            if(k%2==0)
                sum=sum-ara[j]*ara[j]*pi;
            else
                sum=sum+ara[j]*ara[j]*pi;
        }
        cout<<fixed<<setprecision(10)<<sum<<endl;
    }
    return 0;
}

