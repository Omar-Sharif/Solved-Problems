#include<bits/stdc++.h>
using namespace std;

int ara[110],ara1[110];
int n;
int check(int x,int y)
{
    int count=0;
    for(int i=1;i<=n;i++){
        if(i>=x and i<=y){
            if(ara[i]==0)count++;
        }
        else{
            if(ara[i]==1)count++;
        }
    }
   // cout<<count<<endl;
    return count;
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];
        int count=0;

        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int c=check(i,j);
                count=max(count,c);
            }
        }
        cout<<count<<endl;
    }
}
