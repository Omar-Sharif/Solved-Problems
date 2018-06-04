#include<bits/stdc++.h>
using namespace std;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
char ara[110][110];

int check(int x,int y,int n)
{
    int flag=0,a,b;

    for(int i=0;i<4;i++){
        a=x+dx[i];
        b=y+dy[i];
       // cout<<a<<' '<<b<<endl;
        if(a>=n or a<0 or b>=n or b<0){
            flag=1;
            break;
        }
        if(ara[a][b]=='.'){
            flag=1;
            break;
        }
    }

    if(flag==0){
        ara[x][y]='.';
        for(int i=0;i<4;i++){
            a=x+dx[i];
            b=y+dy[i];
            //cout<<a<<' '<<b<<endl;
            ara[a][b]='.';
        }
    }
}
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ara[i][j]=='#'){
                    check(i,j,n);
                }
            }
        }

        int flag=0;

       for(i=0;i<n;i++){
            for(j=0;j<n;j++){
               if(ara[i][j]=='#'){
                    flag=1;
                    break;
               }
            }
            if(flag==1)break;
        }

        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
