#include<bits/stdc++.h>
using namespace std;
char s[110][110];

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>s[i][j];
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
//cout<<s[i][j]<<endl;
                if(s[i][j]=='-')continue;
                if(i%2==1 and j%2==1)s[i][j]='B';
                else if(i%2==1 and j%2==0)s[i][j]='W';
                else if(i%2==0 and j%2==1)s[i][j]='W';
                else s[i][j]='B';
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            cout<<s[i][j];
            cout<<endl;
        }
    }
}
