#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,x,y,z,d1,d2,d3;
    cin>>d1>>d2>>d3;

    w=d1+d2+d3,x=2*(d1+d2),y=2*(d1+d3),z=2*(d2+d3);
    int value=min(w,min(x,min(y,z)));
    cout<<value<<endl;
}
