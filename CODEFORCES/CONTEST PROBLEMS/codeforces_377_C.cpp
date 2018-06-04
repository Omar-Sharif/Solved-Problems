#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    lli b,d,s,sum;

    while(cin>>b>>d>>s){
       sum=0;
       if(b>d and b>s) sum=2*b-(d+s+2);
       else if(d>b and d>s) sum=2*d-(b+s+2);
       else if(s>b and s>d) sum=2*s-(b+d+2);
       else if(b==d and s<b) sum=b-s-1;
       else if(b==s and d<b) sum=b-d-1;
       else if(d==s and b<d) sum=d-b-1;
       else if(b==d and s>b) sum=s-b-1;
       else if(b==s and d>b) sum=d-b-1;
       else if(d==s and b>d) sum=b-d-1;

       if(sum<0)sum=0;
       cout<<sum<<endl;
    }
}


