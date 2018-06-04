#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define sc(x) scanf("%d",&x);
int n,ara[mx];
stack<int>s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        sc(ara[i]);
    int ans=0;
    s.push(0);
    for(int i=1;i<=n;i++){
        while(1){
            int x=s.top();
            if(x==ara[i])break;
            else if(ara[i]>x){
                ans++;
                s.push(ara[i]);
                break;

            }
            else{
               s.pop();
            }
        }
    }
    cout<<ans<<endl;
}

