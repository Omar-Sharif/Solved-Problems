#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        int l,r,i=0,r1,a,b,count=0;
        for(int j=0;j<n;j++){
            cin>>l>>r;
            count=count+r-l;
            while(i<l){
                i=i+x;
            }
            a=i-x;
            count=count+l-a;
            i=r;

    }
    cout<<count<<endl;
}
return 0;
}
