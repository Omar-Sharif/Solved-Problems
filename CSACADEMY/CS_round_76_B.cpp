#include<bits/stdc++.h>
using namespace std;

int B[1000][1000],A[1000][1000],h,w,x,y;

int main()
{
    cin>>h>>w>>x>>y;

    for(int i=1;i<=h+x;i++){
        for(int  j=1;j<=w+y;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(i>x and j>y){
                B[i][j]-=B[i-x][j-y];
            }
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++)
            cout<<B[i][j]<<' ';
        cout<<endl;
    }
}
