#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int vis[1010][1010];
int main()
{
    int n;
    while(cin>>n)
    {
        int x,y;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            vis[x][y]=1;
        }

        long long sum=0,count=0;

       for(int i=1;i<=1000;i++){
                count=0;
           for(int j=1,k=i;j<=1000 and k<=1000;j++,k++){
                if(vis[j][k]==1)count++;
           }
            sum+=((count-1)*(count))/2;
            count=0;
           for(int j=i+1,k=1;j<=1000 and k<=1000;j++,k++){
                  if(vis[j][k]==1)count++;
           }
           sum+=((count-1)*(count))/2;
        }

        for(int i=1;i<=1000;i++){
            count=0;
            for(int j=i,k=1000;j<=1000 and k>=1;j++,k--){
                if(vis[j][k]==1)count++;
            }
            sum+=((count-1)*(count))/2;

            count=0;
            for(int j=1,k=1000-i;j<=1000 and k>=1;j++,k--){
                if(vis[j][k]==1)count++;
            }
            sum+=((count-1)*(count))/2;
        }
        cout<<sum<<endl;
    }
}

