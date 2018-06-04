#include<bits/stdc++.h>
using namespace std;
int ara[1010];
map<int,bool>vis;
vector<int>v;
int main()
{
   int n,count;
   while(cin>>n)
   {
       for(int i=0;i<n;i++){
            cin>>ara[i];
            vis[ara[i]]=1;
       }
        int a,b,x,y,c,d;
       for(int i=0;i<n-1;i++)
       {
           x=ara[i];y=ara[i+1];
            a=__gcd(x,y);
           if(a==1)v.push_back(x);
           else{
                for(int i=a+1;;i++){
                    b=__gcd(i,x);c=__gcd(i,y);
                    if(b==1 and c==1){
                        v.push_back(x);
                        v.push_back(i);
                        break;
                    }
                }
           }
       }
       v.push_back(ara[n-1]);
       cout<<v.size()-n<<endl;
       for(int i=0;i<v.size();i++){
        if(i==v.size()-1)cout<<v[i]<<endl;
        else cout<<v[i]<<' ';
       }
   }
}
