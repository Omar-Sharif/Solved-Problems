#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,a,b,c,d,x,n;
    while(cin>>n){
        r=2*n+1;
        a=n+1;
        c=n*2;
        x=n-1;
        for(int i=1;i<=r;i++){
            if(i<=a){
                for(int j=1;j<=c;j++)cout<<' ';

                for(int k=0;k<i;k++){
                    if(i==1)cout<<k;
                    else cout<<k<<' ';
                }
                for(int l=i-2;l>=0;l--){
                 if(l==0)cout<<l;
                 else cout<<l<<' ';
                }
                cout<<endl;
                c-=2;
            }
        }
        c=2;
       // cout<<a<<' '<<r<<endl;
        for(int i=a+1;i<=r;i++){
            for(int j=1;j<=c;j++)cout<<' ';

            for(int k=0;k<=x;k++){
                if(i==r)cout<<k;
                else cout<<k<<' ';
            }
            for(int l=x-1;l>=0;l--){
                if(l==0)cout<<l;
                else cout<<l<<' ';
            }
            cout<<endl;
            c+=2;
            x--;
        }
    }
}
