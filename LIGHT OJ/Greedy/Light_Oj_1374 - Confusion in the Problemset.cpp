#include<bits/stdc++.h>
using namespace std;

map<int,int>my;

int main()
{
    int t,n,x;
    cin>>t;

    for(int c=1;c<=t;c++){
        scanf("%d",&n);

        int flag=1,v=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            if(x>=n) flag=0;
            else if(x>=(n/2))
                v=n-x-1;
            else v=x;
            my[v]++;
        }

        if(flag){
            if(n%2==1)my[(n/2)]++;
            int z=ceil(n/2.0);
            for(int i=0;i<z;i++){
               // cout<<i<<' '<<my[i]<<endl;
                if(my[i]!=2){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)printf("Case %d: yes\n",c);
        else printf("Case %d: no\n",c);
        my.clear();
    }
}
