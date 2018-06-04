#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    while(cin>>n>>m>>a){
        long long int i=n/a;
        long long int j=m/a;
        if(n%a!=0)
            i++;
        if(m%a!=0)
            j++;
        cout<<i*j<<endl;
    }
    return 0;
}
