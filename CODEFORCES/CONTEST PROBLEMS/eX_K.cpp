#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,m,a,b,c,d,value;
    int ara[8]={2,3,5,7,30,42,70,105};
    int ara1[7]={6,10,14,15,21,35,210};

    while(cin>>n){
        a=0;
        for(int i=0;i<8;i++)
            a+=n/(ara[i]);

       cout<<a<<endl;
        b=0;
        //cout<<n<<endl;
        for(int i=0;i<7;i++){
            //cout<<ara1[i]<<endl;
            b+=(n/ara1[i]);
        }
        cout<<b<<endl;
        cout<<n+b-a<<endl;
    }
}
