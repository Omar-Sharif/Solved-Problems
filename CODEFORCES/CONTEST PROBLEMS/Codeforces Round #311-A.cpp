#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum=0,sum1=0;
    int ara[4],ara1[4],ara2[4];
    while(cin>>n){
            sum1=0;
        for(int i=0;i<3;i++){
            cin>>ara[i]>>ara1[i];
            sum1+=ara1[i];
        }
        int  i=2;
        while(i>=0){
            if(sum1==n)
                break;
            if(sum1>n&&ara1[i]-1>=ara[i]){
                sum1--;
                ara1[i]--;
            }
            if(sum1==n)
                break;
            if(ara1[i]-1<ara[i]){
                i--;
            }
        }
        for(int i=0;i<3;i++){
            if(i==2)
                cout<<ara1[i]<<endl;
            else
                cout<<ara1[i]<<' ';
        }


    }
}
