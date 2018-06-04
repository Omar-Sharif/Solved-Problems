#include<bits/stdc++.h>
using namespace std;
int ara[50010][7];
int value[50010][7];

int main()
{
    int n,p;
    cin>>n>>p;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++)
            cin>>ara[i][j];
    }

    int i=1;
    for(int j=1;j<=p;j++){
        if(j==1)value[i][j]=ara[i][j];
        else value[i][j]=value[i][j-1]+ara[i][j];
    }

    int j=1;
    for(int i=2;i<=n;i++){
        value[i][j]=value[i-1][j]+ara[i][j];
    }

    for(int i=2;i<=n;i++){
        for(int j=2;j<=p;j++){
            value[i][j]=max(value[i-1][j],value[i][j-1])+ara[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        if(i==n)
            cout<<value[i][p]<<endl;
        else
            cout<<value[i][p]<<' ';
    }
}
