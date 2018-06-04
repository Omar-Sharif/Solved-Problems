#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    while(cin>>n){
            if(flag!=0)
            cout<<endl;
        flag++;
        string s[n+1],s2;
        int ara[n+1],m,p,r;
        memset(ara,0,sizeof(ara));
        for(int i=1;i<=n;i++)
            cin>>s[i];
        int i;
        for(int k=1;k<=n;k++){
            cin>>s2;
            for(i=1;i<=n;i++){
                if(s[i]==s2)
                    break;
            }
            cin>>m>>p;
            if(p!=0){
                     ara[i]+=((m%p)-m);
                     r=m/p;
                for(int o=1;o<=p;o++){
                    cin>>s2;
                    for(i=1;i<=n;i++){
                        if(s[i]==s2)
                            break;
                    }
                    ara[i]+=r;
                }
            }
        }
        for(int i=1;i<=n;i++)
            cout<<s[i]<<' '<<ara[i]<<endl;

    }
    return 0;
}
