#include<bits/stdc++.h>
using namespace std;

struct point
{
    int q;
    bool b;
    long double value;
}my[100010],my1[100010];

bool cmp(point a,point b)
{
    return a.value<b.value;
}
int found(int n)
{
    long double pot=0;
    for(int i=1;i<=n;i++){
        cout<<my[i]<<' '<<my1[i]<<endl;
        pot+=min(my[i],my1[i]);
    }
    cout<<pot<<endl;
    return pot;
}
int main()
{
   long double a1,a2,b1,b2,t1,t2,x,y;

   while(cin>>a1>>a2>>b1>>b2>>t1>>t2)
   {
       int n;
       cin>>n;
       long double a,b,c,d;
       for(int i=1;i<=n;i++){
            cin>>x>>y;

            a=(x-a1)*(x-a1)+(y-a2)*(y-a2);
            a=sqrt(a);
            b=(x-t1)*(x-t1)+(y-t2)*(y-t2);
            b=sqrt(b);

            c=(x-b1)*(x-b1)+(y-b2)*(y-b2);
            c=sqrt(c);
            cout<<a<<' '<<b<<' '<<c<<' '<<i<<endl;
            my[i].q=i;my[i].value=a+b;my[i].b=0;
            my1[i].q=i;my1[i].value=a+c;my1[i].b=0;
       }

       sort(my+1,my+n+1,cmp);
       sort(my1+1,my1+n+1,cmp);

       for(int i=1;i<=n;i++){
        cout<<my[i].q<<' '<<my[i].value<<' '<<my[i].b<<endl;
        cout<<my1[i].q<<' '<<my1[i].value<<' '<<my1[i].b<<endl;
       }
   }
}

