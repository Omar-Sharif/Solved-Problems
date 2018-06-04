#include<iostream>
using namespace std;
int main()
{
    int  n,k,a,sum,m,l;
    while(cin>>n>>k){
         l=n;
        while(n!=0){
            a=n%k;
            n=n/k;
            sum=n+a;
             l=l+n;
            n=sum;
            if(n<k)
                break;
        }
        cout<<l<<endl;
    }
    return 0;
}
