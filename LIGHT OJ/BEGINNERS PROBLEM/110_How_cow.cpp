#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    cin>>t;

    while(t--)
    {
        int m,x1,x2,y1,y2,x,y;
        cin>>x1>>y1>>x2>>y2>>m;

        printf("Case %d:\n",++caseno);

        for(int i=0;i<m;i++){
            cin>>x>>y;
            if(x>x1&&x<x2&&y>y1&&y<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
