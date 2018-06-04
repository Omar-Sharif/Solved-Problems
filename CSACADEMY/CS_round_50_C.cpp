#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double x[15],y[15],s[20],a,b,d;
        for(int i=1;i<=4;i++)
            cin>>x[i]>>y[i];

        int c=1;
        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++){
                s[c]=((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j]));
                c++;
            }
        }
        sort(s+1,s+c);
        int f=1;
        a=s[1],b=s[5],d=s[13];
        for(int i=1;i<c;i++){
            if(i<=4 and s[i]!=a){
                f=0; break;
            }
            else if(i>4 and i<=12 and s[i]!=b){
                f=0; break;
            }
            else if(i>12 and s[i]!=d){
                f=0;break;
            }
        }
        cout<<f<<endl;
    }
}

