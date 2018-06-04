#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int value[7][5];
int main()
{
    int n;
    int x;
    cin>>n>>x;
    value[0][0]=0;value[0][1]=1;value[0][2]=2;
    value[1][0]=1;value[1][1]=0;value[1][2]=2;
    value[2][0]=1;value[2][1]=2;value[2][2]=0;
    value[3][0]=2;value[3][1]=1;value[3][2]=0;
    value[4][0]=2;value[4][1]=0;value[4][2]=1;
    value[5][0]=0;value[5][1]=2;value[5][2]=1;

    n=n%6;
    cout<<value[n][x]<<endl;

}
