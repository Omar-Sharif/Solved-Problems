#include<bits/stdc++.h>
using namespace std;

int ara[110][110];

int main()
{
    int n,m,d;
    while(cin>>n>>m>>d)
    {
        int ma=0,mi=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>ara[i][j];
                ma=max(ara[i][j],ma);
                mi=min(ara[i][j],mi);
            }
        }
        int flag=0;
        long long value=LONG_MAX;
        long long count=0;
        for(int i=mi;i<=ma;i++){
                flag=0;
            count=0;
            for(int j=1;j<=n;j++){
                for(int k=1;k<=m;k++){
                    if(abs(i-ara[j][k])%d==0){
                        count+=abs(i-ara[j][k])/d;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
            }
            if(flag==0)value=min(value,count);
        }
        if(value==LONG_MAX)cout<<-1<<endl;
        else cout<<value<<endl;
    }
}
