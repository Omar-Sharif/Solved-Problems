#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sum=0,n,m,a,i,j,k;

    while(cin>>n)
    {
        a=0;
        m=n;
        while(m>0){
            m/=10;
            a++;
        }
        sum=0;
        i=9;
        j=1;
        while(a>0){
            if(n>i){
                sum+=i*j;
                n=n-i;
            }
            else{
                sum+=n*j;
            }
            //cout<<sum<<endl;
            a--;
            j++;
            i*=10;
        }
        cout<<sum<<endl;
    }
}
