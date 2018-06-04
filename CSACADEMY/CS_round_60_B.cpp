#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
pii ara[100010];
bool chk[100010];

int main()
{
    int n,e1,e2,a,b;
    scanf("%d %d %d",&n,&e1,&e2);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&ara[i].first,&ara[i].second);
    }

    int count=0;
    if(e1<=e2){
        for(int i=1;i<=n;i++){
            if(ara[i].first<ara[i].second and chk[i]==0){
               if(e1<=ara[i].first){
                count++;
                chk[i]=1;
               }
            }
        }
        for(int i=1;i<=n;i++){
            if(ara[i].first>ara[i].second and chk[i]==0){
               if(e2>=ara[i].first){
                count++;
                chk[i]=1;
               }
            }
        }
    }
    else{
      for(int i=1;i<=n;i++){
            if(ara[i].first<ara[i].second and chk[i]==0){
               if(e2<=ara[i].first){
                count++;
                chk[i]=1;
               }
            }
        }

        for(int i=1;i<=n;i++){
            if(ara[i].first>ara[i].second and chk[i]==0){
               if(e1>=ara[i].first){
                count++;
                chk[i]=1;
               }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

