#include<bits/stdc++.h>
using namespace std;
int ara[200010];

int main()
{
    int n,x,flag;
    while(cin>>n){
        flag=0;
        for(int i=0;i<n;i++)
            cin>>ara[i];
        int sum=0;

        for(int i=0;i<n;i++){
            if(ara[i]==0){
                if(sum%2!=0){
                    flag=1;
                    break;
                }
            }
            sum+=ara[i]%2;
        }
        if(sum%2!=0){
            flag=1;
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
