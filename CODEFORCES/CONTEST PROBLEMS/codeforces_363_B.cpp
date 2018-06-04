#include<bits/stdc++.h>
using namespace std;
char ara[1010][1010];
int row[1010],col[1010],n,m;

int main()
{
    while(cin>>n>>m)
    {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>ara[i][j];
                if(ara[i][j]=='*')count++;
            }
        }
      //  cout<<count<<endl;
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(ara[i][j]=='*')c++;
            }
            row[i]=c;
            c=0;
        }

        c=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(ara[j][i]=='*')c++;
            }
            col[i]=c;
            c=0;
        }

        int flag=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               // cout<<i<<' '<<j<<' '<<row[i]<<' '<<col[j]<<endl;
                if(ara[i][j]=='*'){
                    int v=row[i]+col[j]-1;
                    if(v==count){
                        cout<<"YES"<<endl;
                        cout<<i<<' '<<j<<endl;
                        flag=1;
                        break;
                    }
                }
                else{
                   int v=row[i]+col[j];
                    if(v==count){
                        cout<<"YES"<<endl;
                        cout<<i<<' '<<j<<endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)break;
        }
        if(flag==0)cout<<"NO"<<endl;
    }
}

