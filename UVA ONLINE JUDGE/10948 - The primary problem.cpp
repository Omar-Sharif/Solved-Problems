#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=2;i<=10000;i++){
            int x=sqrt(i);
            int flag=1;
        for(int j=2;j<=x;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
            if(flag==1)
                cout<<i<<' ';
    }
    for(int i=10000;i<=1000000;i++){
            int x=sqrt(i);
            int flag=1;
        for(int j=2;j<=x;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
            if(flag==1)
                cout<<i<<' ';
    }

}
