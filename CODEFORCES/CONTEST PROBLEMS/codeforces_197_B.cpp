#include<bits/stdc++.h>
using namespace std;
int ara[100010];

int main()
{
    long long sum;
    int n,m;

    while(cin>>n>>m)
    {
        int pos=1;
        sum=0;
        for(int i=0;i<m;i++)
            cin>>ara[i];

        for(int i=0;i<m;i++){
            if(ara[i]>pos) sum+=ara[i]-pos;
            else if(ara[i]<pos)sum+=n+ara[i]-pos;
            pos=ara[i];
        }
        cout<<sum<<endl;
    }
}
