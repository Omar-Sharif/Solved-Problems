#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1000];
    int flag=0,j=1;
    for(int i=1;i<=1000;i++){
        if(i%2!=0){
            for(int m=2;m<=sqrt(i);m++){
                flag=1;
                if(i%m==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ara[j]=i;
                j++;
            }
        }
    }
    for(int k=1;k<j;k++)
        cout<<ara[k]<<' ';
}
