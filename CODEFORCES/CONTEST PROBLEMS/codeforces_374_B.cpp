#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100000
vector<int>v;
int main()
{
    int n,k,a,b,c,l;
    string s;
    while(cin>>n>>k)
    {
       for(int i=1;i<=n;i++){
            cin>>s;
            v.push_back(s.length());
       }
       cin>>s;
       l=s.length();
       a=0;b=0;c=0;
       for(int i=0;i<v.size();i++){
         //  cout<<l<<' '<<v[i]<<endl;
            if(v[i]<l)a++;
            else if(v[i]==l)b++;
            else c++;
       }
       //cout<<a<<' '<<b<<' '<<c<<endl;
       int mi=(a+1)+(a/k)*5;
       int mxx=(a+b)+((a+b-1)/k)*5;
       cout<<mi<<' '<<mxx<<endl;
    }
}
