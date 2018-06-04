#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,x1,x2,y1,y2,h1,h2,a1,a2,i,j,k,l;
    while(cin>>m){
        cin>>h1>>a1;
        cin>>x1>>y1;
        cin>>h2>>a2;
        cin>>x2>>y2;
        i=h1*x1+y1;
        j=i%m;
        k=h2*x2+y2;
        l=k%m;
               int o,p,flag=0;
            for(o=1;;o++){
                if(j==a1&&l==a2)
                    break;
                  k=l*x2+y2;
                    l=k%m;
                    i=j*x1+y1;
                    j=i%m;
                    if(l==h2&&j==h1){
                        cout<<-1<<endl;
                        flag=1;
                        break;
                    }
                   if(o>100000000){
                        cout<<-1<<endl;
                        break;
                   }
        }
        if(flag!=1)
        cout<<o<<endl;

    }
}
