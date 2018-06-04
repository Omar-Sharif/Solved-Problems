#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,w,h;
    int t,cas=0;
    cin>>t;
    while(t--){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        //w=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        //h=sqrt((cx-bx)*(cx-bx)+(cy-by)*(cy-by));
        //h=sqrt((dx-ax)*(cx-bx)+(cy-by)*(cy-by));
        dx=ax+cx-bx;
        dy=ay+cy-by;
        w=ax*by-bx*ay+bx*cy-cx*by+cx*dy-dx*cy+dx*ay-ax*dy;
        w=abs(w)/2;
        printf("Case %d: ",++cas);
        cout<<fixed<<setprecision(0)<<dx<<' '<<dy<<' '<<w<<endl;
       // cout<<w<<endl;


    }
}
