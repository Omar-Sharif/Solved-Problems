#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[510][510],n,x,y;
lli check(lli sum)
{
    lli sum1=0;

    for(int i=0;i<n;i++){
            sum1=0;
        for(int j=0;j<n;j++){
            sum1+=ara[i][j];
        }
        if(sum!=sum1){
            return -1;
        }
    }

   // cout<<sum<<' '<<sum1<<endl;

    sum1=0;
    for(int i=0;i<n;i++){
        sum1=0;
        for(int j=0;j<n;j++){
            sum1+=ara[j][i];
        }
        if(sum!=sum1){
            return -1;
        }
    }
    sum1=0;
    for(int i=0;i<n;i++)sum1+=ara[i][i];
    if(sum!=sum1)return -1;
    sum1=0;
    for(int i=0;i<n;i++)sum1+=ara[i][n-i-1];
    if(sum!=sum1)return -1;

    return 1;
}

int main()
{
    while(cin>>n)
    {
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ara[i][j];
                if(ara[i][j]==0){
                    x=i;y=j;
                }
            }
        }
        if(n==1){
            cout<<1<<endl;
            return 0;
        }
        lli sum=0,sum1=0;
      //  cout<<x<<' '<<y<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n and i!=x;j++){
                sum+=ara[i][j];
            }
           if(sum>0)break;
        }
        for(int j=0;j<n;j++){
                sum1+=ara[x][j];
        }
        //cout<<sum<<' '<<sum1<<endl;
        if(sum1>=sum)cout<<-1<<endl;
        else{
            ara[x][y]=sum-sum1;
            int c=check(sum);
            if(c==1)cout<<sum-sum1<<endl;
            else cout<<-1<<endl;
        }

    }
}

