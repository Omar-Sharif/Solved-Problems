#include<bits/stdc++.h>
using namespace std;

#define mx 300010
int n,m;
char ara[mx];

int check_sum()
{
    int x=0,y=0;
    for(int i=1;i<=n;i++){
        if(ara[i]!='.'){
            if(y!=0)x+=y-1;
            y=0;
        }
        else y++;
    }
    if(y!=0)x+=y-1;
    return x;
}

int main()
{
    char c;
    int x;

    while(cin>>n>>m){
        for(int i=1;i<=n;i++)
            cin>>ara[i];
        ara[0]='c';ara[n+1]='c';
        int sum=check_sum();

        while(m--){
            cin>>x>>c;
            if(c!='.' and ara[x]=='.'){
                if(ara[x-1]!='.' and ara[x+1]!='.')sum=sum;
                else if(ara[x-1]=='.' and ara[x+1]=='.')
                    sum-=2;
                else sum-=1;

            }
            else if(c=='.' and ara[x]!='.'){
                if(ara[x-1]!='.' and ara[x+1]!='.')sum=sum;
                else if(ara[x-1]=='.' and ara[x+1]=='.')
                    sum+=2;
                else sum+=1;
            }
            ara[x]=c;
            if(sum<0)sum=0;
            cout<<sum<<endl;
        }
    }
}

