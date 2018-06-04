#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,v;
    while(cin>>x>>y)
    {
        v=abs(x)+abs(y);
        if(x>0 and y>0)cout<<0<<' '<<v<<' '<<v<<' '<<0<<endl;
        else if(x<0 and y>0)cout<<-v<<' '<<0<<' '<<0<<' '<<v<<endl;
        else if(x<0 and y<0)cout<<-v<<' '<<0<<' '<<0<<' '<<-v<<endl;
        else cout<<0<<' '<<-v<<' '<<v<<' '<<0<<endl;
    }
}
