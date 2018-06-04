#include<iostream>
using namespace std;
int main()
{
    long long int fibo[81],i,n;
    fibo[0]=1,fibo[1]=1;
    for(i=2;i<81;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
    while(cin>>n){
        if(n==0)
            break;
        else
            cout<<fibo[n]<<endl;
    }
    return 0;
}
