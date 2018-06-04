#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mxx 100010

int ara[5][10],n;
int check2(int d,int x)
{
   // cout<<"check2"<<' '<<d<<' '<<x<<endl;
    int flag=0;
    for(int i=1;i<=n;i++){
        if(i==x)continue;
        for(int j=1;j<=6;j++){
            if(ara[i][j]==d)flag=1;
        }
    }
    return flag;
}

int check3(int x,int y,int z)
{
    int c=0,c1=0,c2=0,flag=0;
    for(int i=1;i<=6;i++){
        if(ara[1][i]==x)c=1;
    }
    for(int i=1;i<=6;i++){
        if(ara[2][i]==y)c1=1;
    }
    for(int i=1;i<=6;i++){
        if(ara[3][i]==z)c2=1;
    }
    if(c1==1 and c2==1 and c==1)flag=1;
    return flag;
}

int check(int c)
{
   int flag=0;
   if(c<10){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=6;j++)
            if(ara[i][j]==c){
                flag=1;
            }
        }
   }
   else if(c<100){
        int d=c%10;
        int e=c/10;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=6;j++){
                if(ara[i][j]==d){
                    flag=max(flag,check2(e,i));
                }
            }
        }
   }
   else if(c>=100 and n==3){
    int x=c%10;
    int y=(c/10)%10;
    int z=c/100;
    flag=max(flag,check3(x,y,z));
    flag=max(flag,check3(x,z,y));
    flag=max(flag,check3(y,x,z));
    flag=max(flag,check3(y,z,x));
    flag=max(flag,check3(z,x,y));
    flag=max(flag,check3(z,y,x));
   }
   return flag;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++)
            cin>>ara[i][j];
    }
    int mx=0,c=1;
    while(1){
        int d=check(c);
        if(d==0)break;
        mx=c;
        c++;
    }
    cout<<mx<<endl;
}

