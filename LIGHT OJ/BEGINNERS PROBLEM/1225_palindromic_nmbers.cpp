#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    char ara[1000];
    cin>>t;
    while(t--){
        scanf("%s",ara);
        int l=strlen(ara),flag=0;
        l-=1;
            for(int i=0;i<=l/2;i++){
                if(ara[i]!=ara[l-i]){
                    flag=1;
                    break;
                }
            }

        if(flag==0){
            printf("Case %d: Yes\n",++caseno);
        }
        else{
            printf("Case %d: No\n",++caseno);
        }
    }
}
