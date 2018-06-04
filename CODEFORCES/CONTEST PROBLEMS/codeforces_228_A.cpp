#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int n,a,x;
    while(cin>>n)
    {
        x=0;
        for(int i=0;i<n;i++){
           cin>>a;
           x=__gcd(x,a);
        }
        cout<<x*n<<endl;
    }
}
