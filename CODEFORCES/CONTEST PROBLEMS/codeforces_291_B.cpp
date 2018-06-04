#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

struct point
{
    int b;
    int px,py;
};
vector<point>v;

int main()
{
    int n,a,b,x1,y1;
    while(cin>>n>>x1>>y1)
    {
        point p;
        for(int i=1;i<=n;i++){
            cin>>a>>b;
            p.px=a;
            p.py=b;
            p.b=0;
            v.push_back(p);
        }

        int x,y,y2,x2,value1,value2,m1,m2,m3,m4;
        long long count=0;

        for(int i=0;i<v.size();i++){
            if(v[i].b==1)continue;
            x2=v[i].px; y2=v[i].py;
       // cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
            m1=(y1-y2); m2=x1*(y1-y2);
            m3=(x1-x2); m4=y1*(x1-x2);
           // cout<<m1<<' '<<m2<<' '<<m3<<' '<<m4<<endl;
            for(int j=i+1;j<v.size();j++){
                //cout<<v[j].px*m1-m2<<' '<<v[j].py*m3-m4<<endl;
                if(v[j].px*m1-m2 == v[j].py*m3-m4){
                    v[j].b=1;
                }
            }
            count++;
        }
        cout<<count<<endl;
        v.clear();
    }
}
