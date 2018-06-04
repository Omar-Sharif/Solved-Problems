#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        if(b==0)cout<<a<<endl;
        else if(b>0){
            int y=(a+(b%n))%n;
            if(y==0)cout<<n<<endl;
            else cout<<y<<endl;
        }
        else{
            int x=abs(b);
            x=(x%n);
            int y=(a-x+n)%n;
            if(y==0)cout<<n<<endl;
            else cout<<(a-x+n)%n<<endl;
        }
    }
}

