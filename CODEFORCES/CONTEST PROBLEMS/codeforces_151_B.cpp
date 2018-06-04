#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n)
    {
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        sum=abs(sum);

        if(sum%n==0)cout<<n<<endl;
        else cout<<n-1<<endl;
    }
}
