#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cas=0,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x,sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>0)sum+=x;
        }
        printf("Case %d: %d\n",++cas,sum);
    }
}
