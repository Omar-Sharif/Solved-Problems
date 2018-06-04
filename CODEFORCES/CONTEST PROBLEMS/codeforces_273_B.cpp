#include<bits/stdc++.h>
using namespace std;
long long n,m,s1,s2,s3,i,j,k;
int main()
{
    while(cin>>n>>m){
        i=n/m;
        j=n%m;
        s1=((i*(i+1))/2)*j+((i*(i-1))/2)*(m-j);
        k=n-m+1;
        s2=(k*(k-1))/2;
        cout<<s1<<' '<<s2<<endl;
    }
}
