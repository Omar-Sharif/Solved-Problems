#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,mx,mi,my,miy,n;

    while(cin>>n)
    {
        mx=-LONG_LONG_MAX;mi=LONG_LONG_MAX;
        my=-LONG_LONG_MAX;miy=LONG_LONG_MAX;

        for(int i=0;i<n;i++){
            cin>>x>>y;
            mx=max(mx,x);
            mi=min(mi,x);
            my=max(my,y);
            miy=min(miy,y);
        }
        n=max(abs(mx-mi),abs(my-miy));
        cout<<n*n<<endl;
    }
}
