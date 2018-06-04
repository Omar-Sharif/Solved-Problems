#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 200010
char ara[1010];
int main()
{
   for(int i=0;i<1010;i++)
        ara[i]='0';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    int flag=0,count=0;

    for(int i=1;i<=n;i++){
        if(ara[i]=='1'){
            if(ara[i-1]=='1' or ara[i+1]=='1'){
                flag=1;
                break;
            }
        }
        if(ara[i]=='0'){
            if(ara[i-1]=='0' and ara[i+1]=='0'){
                count++;
            }
        }
    }
    if(flag==0 and count==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
