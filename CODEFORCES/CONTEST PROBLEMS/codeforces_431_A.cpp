#include<bits/stdc++.h>
using namespace std;
int ara[110];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    if(ara[1]%2==0 or ara[n]%2==0 or n%2==0){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
}
