#include<bits/stdc++.h>
using namespace std;

long long r,g,b,mx,x;

int check(int a,int b,int c,int i)
{
    if(a<=i or b<=i or c<=i)return -1;
    return i+(a-i)/3+(b-i)/3+(c-i)/3;
}

int main()
{
    while(cin>>r>>g>>b)
    {
        mx=(r/3)+(g/3)+(b/3);

        for(int i=1;i<3;i++){
            x=check(r,b,g,i);
            mx=max(x,mx);
        }
        cout<<mx<<endl;
    }
}
