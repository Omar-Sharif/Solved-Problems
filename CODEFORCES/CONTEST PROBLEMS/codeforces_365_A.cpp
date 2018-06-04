#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int a,b,m=0,c=0;

        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a>b)m++;
            if(b>a)c++;
        }
        if(m>c)cout<<"Mishka"<<endl;
        else if(c>m)cout<<"Chris"<<endl;
        else cout<<"Friendship is magic!^^"<<endl;
    }
}
