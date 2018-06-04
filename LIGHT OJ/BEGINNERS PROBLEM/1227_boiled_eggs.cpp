#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    cin>>t;
    while(t--){
        int n,p,q,count=0,w=0;
        cin>>n>>p>>q;
        int ara[n+1];

        for(int i=0;i<n;i++){
            cin>>ara[i];
        }

        sort(ara,ara+n);

        for(int i=0;i<n;i++){
            w+=ara[i];
            if(count<p&&w<=q){
                count++;
            }
        }

        printf("Case %d: %d\n",++caseno,count);
    }
    return 0;
}
