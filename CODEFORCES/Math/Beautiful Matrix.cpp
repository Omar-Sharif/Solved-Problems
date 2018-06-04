#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[6][6];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            cin>>ara[i][j];
    }
    int m,n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(ara[i][j]==1){
                m=i;
                n=j;
            }

        }
    }
    cout<<abs(3-m)+abs(3-n)<<endl;
}
