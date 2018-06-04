#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int flag1=0;
        for(int i=4;i<=n;i++){
            int m=i;
            int flag=0;
            while(m!=0){
                int a=m%10;
                m=m/10;
                if(a!=4 && a!=7){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                if(n%i==0){
                    cout<<"YES\n";
                    flag1=1;
                    break;
                }
            }
        }
        if(flag1==0) cout<<"NO\n";
    }
    return 0;
}


