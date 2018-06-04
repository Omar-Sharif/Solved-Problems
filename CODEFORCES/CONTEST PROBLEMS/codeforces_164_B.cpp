#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
    long long sum,k=2;
       sum=2*n-1;

       for(int i=n-2;i>=1;i--){
            sum+=i*k;
            k++;
       }
       cout<<sum<<endl;
    }
}
