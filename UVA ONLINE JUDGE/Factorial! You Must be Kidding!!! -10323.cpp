#include<iostream>
using namespace std;
long long fact(long long n){
    long long i,res=1;
    for(i=1;i<=n;i++)
        res*=i;
    return res;
}
int main()
{
    long long n;
    while(cin>>n){
        if(n<0 && n%2==0)  cout<<"Underflow!"<<"\n";
        else if(n<0 && n%2!=0)  cout<<"Overflow!"<<"\n";
        else if(n<8){
            cout<<"Underflow!"<<"\n";
        }
        else if(n>13){
            cout<<"Overflow!"<<"\n";
        }
        else{
            cout<<fact(n)<<"\n";
        }
    }
    return 0;
}
