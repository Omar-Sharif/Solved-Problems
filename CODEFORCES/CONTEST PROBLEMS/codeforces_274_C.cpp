#include<bits/stdc++.h>
using namespace std;
#define lli long long
struct st
{
    lli a,b;
}ara[5050];

bool cmp(st x,st y)
{
    if(x.a<y.a)return true;
    else if(x.a==y.a){
        if(x.b<y.b)return true;
        else return false;
    }
    else return false;
}
int main()
{
    lli n;
    while(cin>>n)
    {
        for(lli i=0;i<n;i++)
            cin>>ara[i].a>>ara[i].b;

        sort(ara,ara+n,cmp);

        lli mi=ara[0].b;

        for(lli i=1;i<n;i++){
            if(mi>ara[i].b)mi=ara[i].a;
            else mi=ara[i].b;
        }
        cout<<mi<<endl;
    }
}
