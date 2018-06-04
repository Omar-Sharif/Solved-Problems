#include<bits/stdc++.h>
using namespace std;

string ara[100010];
int n,m;

int main()
{
    int k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>ara[i][j];
    }

    int count=0;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        for(int j=0;j<(m+1)/2;j++){
            a=i;b=j;c=n-1-i;d=m-1-j;
            if(ara[i][j]==ara[i][m-1-j])continue;
            if(ara[i][j]==ara[c][j])ara[i][m-1-j]=ara[i][j];
            else ara[i][j]=ara[i][m-1-j];
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<ara[i][j];
        cout<<endl;
    }
}
