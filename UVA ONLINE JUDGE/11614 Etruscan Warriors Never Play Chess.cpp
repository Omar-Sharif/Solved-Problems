#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--){
        long long x,y,z,sum;
        cin>>x;
        y=sqrt(x)*sqrt(2);
        sum=(y*(y+1))/2;

        if(sum==x){
            cout<<y<<endl;
        }
        else if(sum>x){
            cout<<y-1<<endl;
        }
        else{
            z=y+1;
            sum=(z*(z+1))/2;
            if(sum>x)
                cout<<y<<endl;
        }
    }
    return 0;
}
