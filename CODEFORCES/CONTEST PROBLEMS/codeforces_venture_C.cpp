#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        n*=2;
        m*=3;

        int value=6;

        while(1)
        {
            if(value>n or value>m)break;

            if(max(n+2,m)<=max(n,m+3))
                n+=2;
            else m+=3;
            value+=6;

            //cout<<n<<' '<<m<<endl;
        }

        cout<<max(n,m)<<endl;
    }
}
