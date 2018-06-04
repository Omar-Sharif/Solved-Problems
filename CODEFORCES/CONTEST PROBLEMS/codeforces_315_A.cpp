#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
        int n;
        scanf("%d",&n);
        int ara[n+1];
        bool ara1[n+1];
        memset(ara1,0,sizeof(ara));
        int count=0;
        for(int i=0;i<n;i++){
            scanf("%d", &ara[i]);
            int x=ara[i];
            if(ara1[x]==0 and x<=n)ara1[x]=1;
            else {
               v.push_back(i);
               count++;
            }
        }
        if(count==0){
            for(int i=0;i<n;i++){
                if(i<n-1)
                    printf("%d ",ara[i]);
                else
                    printf("%d\n",ara[i]);
            }

        }
        else{
            for(int i=0;i<count;i++){
                    int j;
                for(j=1;j<=n;j++){
                    if(ara1[j]==0)
                        break;
                }
                ara[v[i]]=j;
                ara1[j]=1;
            }

             for(int i=0;i<n;i++){
                if(i<n-1)
                    printf("%d ",ara[i]);
                else
                    printf("%d\n",ara[i]);
            }
        }
}
