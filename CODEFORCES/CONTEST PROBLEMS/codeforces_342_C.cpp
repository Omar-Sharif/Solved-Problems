#include<bits/stdc++.h>
using namespace std;

int ara[510][510];
int vis[502*502];
vector<int>v;

int main()
{
    int n,c;

    while(cin>>n>>c){
        int value=n*n;
        memset(vis,0,sizeof(vis));

       // cout<<value<<endl;
        for(int i=1;i<=n;i++){
            for(int j=c;j<=n;j++){
                   // cout<<value-n+j<<endl;
               ara[i][j]=value-n+j;
               vis[ara[i][j]]=1;
               //cout<<ara[i][j]<<endl;
            }
            value=value-n+c-1;
            //cout<<"value "<<value<<endl;
        }

        for(int i=1;i<=n*n;i++){
            if(vis[i]==1)continue;
            v.push_back(i);
        }

        int k=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<c;j++){
                   // cout<<v[k]<<' ';
                ara[i][j]=v[k];
                k++;
            }
            //cout<<endl;
        }

        int sum=0;
        for(int i=1;i<=n;i++)sum+=ara[i][c];
          cout<<sum<<endl;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==n)cout<<ara[i][j]<<endl;
                else cout<<ara[i][j]<<' ';
            }
        }
        v.clear();
    }
}
