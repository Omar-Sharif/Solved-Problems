#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
vector<lli>v;
lli ara[mx];
map<lli,lli>coun;

int main()
{
    lli n;
    while(cin>>n)
    {
        lli a=-1,b=-1,c=-1,d,count=0;;
        for(int i=0;i<n;i++)
            cin>>ara[i];

       sort(ara,ara+n);
       for(int i=0;i<n;i++){
            if(ara[i]!=a){
                a=ara[i];
                v.push_back(a);
            }
       }

       count=v.size();
       if(count>3)cout<<"NO"<<endl;
       else if(count==1 or count==2)cout<<"YES"<<endl;
       else if(count==3){
        sort(v.begin(),v.end());
        a=v[0];b=v[1];c=v[2];
        if(abs(a-b)==abs(b-c))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;

    }
}

