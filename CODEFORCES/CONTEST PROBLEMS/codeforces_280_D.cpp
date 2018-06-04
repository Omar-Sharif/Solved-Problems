#include<bits/stdc++.h>
using namespace std;

#define lli long long
vector<string>v;

int main()
{
   int n,x,y,d;
   cin>>n>>x>>y;

   double c=0,c1=0;
   while(c<x or c1<y){
        if(double((c+1)/x)<double((c1+1)/y)){
            c++;
            v.push_back("Vanya");
        }
        else if(double((c+1)/x)>double((c1+1)/y)){
            c1++;
            v.push_back("Vova");
        }
        else{
            v.push_back("Both");
            v.push_back("Both");
            c++,c1++;
        }
   }

   for(int i=0;i<n;i++){
        cin>>d;
        d=(d-1)%(x+y);
        cout<<v[d]<<endl;
   }
}
