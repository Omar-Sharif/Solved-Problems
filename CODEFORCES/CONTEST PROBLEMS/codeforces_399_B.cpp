#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
vector<lli>v,v1;

lli check(lli a)
{
    lli x,y;
    x=a/2;
    y=a%2;
    if(v1.size()<100005);
    {
        v1.push_back(x);
        v1.push_back(y);
        v1.push_back(x);
    }
}
lli xxx()
{
    int flag=0;
   for(int i=0;i<v.size();i++){
        if(v[i]==1 or v[i]==0){
           if(v1.size()<100005)v1.push_back(v[i]);
        }
        else{
            flag=1;
            check(v[i]);
        }
    }
    if(flag==0)return 0;
    else{
        v.clear();
        v=v1;
        v1.clear();
        xxx();
    }
    return 0;
}
int main()
{
    lli n,l,r;
    cin>>n>>l>>r;
    v.push_back(n);
    xxx();
    l--;r--;
    lli count=0;
    for(int i=l;i<=r;i++)
        if(v1[i]==1)count++;
    cout<<count<<endl;

}
