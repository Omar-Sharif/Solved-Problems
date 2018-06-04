#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

vector<pii>v;

int main()
{
    int n;
    while(cin>>n)
    {
        int x,y,a,b;
        long long sum=0;
        x=10000;

        for(int i=1;i<=n;i++){
            cin>>a>>b;
            x=min(x,b);
            sum+=x*a;
        }
        cout<<sum<<endl;
    }
}
