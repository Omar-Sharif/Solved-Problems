#include<bits/stdc++.h>
using namespace std;

int ara[200010];
int main()
{
    long long step,n,x;
    while(cin>>n)
    {
        for(int i=0;i<n;i++){
            cin>>ara[i];
        }
        x=0;
        step=0;
        for(int i=0;i<n;i++){
            step+=(abs(x-ara[i]));
            x=ara[i];
        }
        cout<<step<<endl;
    }
}
