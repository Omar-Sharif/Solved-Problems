#include<bits/stdc++.h>
using namespace std;

int ara[100][100];
int main()
{

    int n;
    while(cin>>n)
    {
        int x=1,y=2,a=(n+1)/2;

        for(int i=1;i<=n and x<=n*n;i++){
            if(ara[i][a]==0){
                ara[i][a]=x;x+=2;
            }
        }

        for(int i=1;i<=n and x<=n*n;i++){
             if(ara[a][i]==0){
                ara[a][i]=x;x+=2;
             }
        }

        for(int i=1,j=n;i<=n and x<=n*n;i++,j--){
            if(ara[i][i]==0){ara[i][i]=x; x+=2;}
            if(ara[i][j]==0){ara[i][j]=x; x+=2;}
            if(ara[j][i]==0){ara[j][i]=x; x+=2;}
            if(ara[j][j]==0){ara[j][j]=x; x+=2;}

        }
        for

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(ara[i][j]==0){
                    cout<<y<<' ';
                    y+=2;
                }
                else cout<<ara[i][j]<<' ';
            }
            cout<<endl;
        }
    }
}
