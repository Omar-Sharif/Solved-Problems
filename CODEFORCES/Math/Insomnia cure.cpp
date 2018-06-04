#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n;
    long d;
    while(cin>>k>>l>>m>>n>>d){
                long i,count=0;
            for(i=1;i<=d;i++){
                if(i%k==0)
                    count++;
                else if(i%l==0)
                    count++;
                else if(i%m==0)
                    count++;
                else if(i%n==0)
                    count++;
            }
            cout<<count<<endl;
    }
    exit(0);
}
