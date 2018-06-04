#include<bits/stdc++.h>
using namespace std;

int main()
{
    long h1,h2,x,y;
    cin>>h1>>h2>>x>>y;
    int a=8,d=0;
    while(1)
    {
        h1+=x*a;
        if(h1>=h2){
            cout<<d<<endl;
            break;
        }
        d++;
        a=12;
        h1-=y*a;
        if(x*a<=y*a){
            cout<<-1<<endl;
            break;
        }
    }
}
