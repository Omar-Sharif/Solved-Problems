#include<bits/stdc++.h>
using namespace std;

int ara[100],vis[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    int count=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(vis[ara[i]+ara[j]]==0){
                count++;
                vis[ara[i]+ara[j]]=1;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
