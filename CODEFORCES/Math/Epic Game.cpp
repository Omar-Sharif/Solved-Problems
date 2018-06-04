#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    while(cin>>a>>b>>n){
        int flag=1;
        for(;;){
                int p=1,q=1;
            for(int i=1;i<=a;i++){
                if(a%i==0&&n%i==0)
                    p=i;
                }
                n=n-p;
            if(n<0){
                cout<<1<<endl;
                break;
            }
            for(int i=1;i<=b;i++){
                if(b%i==0&&n%i==0)
                    q=i;
            }
            n=n-q;
            if(n<0){
                cout<<0<<endl;
                break;
            }
        }
    }
}
