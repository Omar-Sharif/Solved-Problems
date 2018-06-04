#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define nt int

int main()
{
   string s,s1;
   int hh,mm,m,a,b,c;
   char f;

   while(cin>>a){
        cin>>f;
        cin>>c;
        //cout<<a<<' '<<f<<' '<<c<<endl;
        int fm;
        cin>>fm;
        int x=c+fm;

        int y=(x/60);
        int z=(x%60);

        hh=(a+y)%24;
        mm=z;
        //cout<<hh<<' '<<mm<<endl;
        if(hh<10)cout<<'0'<<hh<<':';
        else cout<<hh<<':';
        if(mm<10)cout<<'0'<<mm;
        else cout<<mm;
        cout<<endl;
   }
}

