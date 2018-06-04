#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int main()
{
   int n;
   while(cin>>n)
   {
       string s;
       cin>>s;

       int count=0;

       for(int i=0;i<n;i++){
            pii p=pii(200,200);
            pii pos=p;
            pii q=pos;
            for(int j=i;j<n;j++){
                if(s[j]=='U')pos.second++;
                if (s[j]=='D')pos.second--;
                if(s[j]=='L')pos.first--;
                if(s[j]=='R')pos.first++;
                if(pos.first==q.first and pos.second==q.second){
                //cout<<i<<' '<<j<<endl;
                    count++;
                }
            }
           // if(flag==1)count++;
       }
       cout<<count<<endl;
   }
}

