#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,caseno=0;
   cin>>t;

   while(t--)
   {
       int m,n,sum=19;
       cin>>m>>n;
       if(m<=n){
            sum+=n*4;
       }
       else{
         sum+=(2*m-n)*4;
       }
       printf("Case %d: %d\n",++caseno,sum);
   }
}
