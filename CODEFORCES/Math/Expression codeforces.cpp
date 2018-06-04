#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int i,j,k,l,m;
        i=a+b+c;
        j=a+b*c;
        k=a*(b+c);
        l=a*b*c;
        m=(a+b)*c;
        int maximum=max(max(max(max(i,j),k),l),m);
        cout<<maximum<<endl;;
    }
    return 0;
}
