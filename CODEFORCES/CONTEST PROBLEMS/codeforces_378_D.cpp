#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<lli,lli>
#define mx 100010
vector<pii>ara,check;
vector<lli>v,ans;
map<pii,vector<pii> >my;

int func(lli a,lli b,lli c,lli i)
{
    pii p;
    if(a==b and b==c){
        p=pii(a,b);
       if(my[p].size()==0)ara.push_back(pii(a,b));
        my[p].push_back(pii(c,i));
    }
    else if(a==b and b!=c){
        p=pii(a,b);
        if(my[p].size()==0)ara.push_back(pii(a,b));
        my[p].push_back(pii(c,i));
        p=pii(a,c);
        if(my[p].size()==0)ara.push_back(pii(a,c));
        my[p].push_back(pii(b,i));
    }
    else if(b==c and a!=b){
        p=pii(a,b);
        if(my[p].size()==0)ara.push_back(pii(a,b));
        my[p].push_back(pii(c,i));
        p=pii(b,c);
        if(my[p].size()==0)ara.push_back(pii(b,c));
        my[p].push_back(pii(a,i));
    }
    else if(a!=b and b!=c){
        p=pii(a,b);
        if(my[p].size()==0)ara.push_back(pii(a,b));
        my[p].push_back(pii(c,i));
        p=pii(a,c);
        if(my[p].size()==0)ara.push_back(pii(a,c));
        my[p].push_back(pii(b,i));
        p=pii(b,c);
        if(my[p].size()==0)ara.push_back(pii(b,c));
        my[p].push_back(pii(a,i));
    }
    return 0;
}

int main()
{
    lli n,a,b,c;
    while(cin>>n){
        for(lli i=1;i<=n;i++){
            scanf("%lld %lld %lld",&a,&b,&c);
            v.push_back(a);v.push_back(b);v.push_back(c);
            sort(v.rbegin(),v.rend());
            a=v[0];b=v[1];c=v[2];
            func(a,b,c,i);
            v.clear();
        }

        lli x,y,z,m,l,u,v;
        long double mi=0,k;
        pii p;
        for(int i=0;i<ara.size();i++){
            x=ara[i].first;y=ara[i].second;
            p=pii(x,y);
            check=my[p];
            sort(check.begin(),check.end());
            l=check.size();
            if(l==1){
                z=check[l-1].first;
                k=min(x,min(y,z)); k/=2.0;
                if(k>mi){
                    mi=k; ans.clear();
                    ans.push_back(check[l-1].second);
                }
            }
            else{
                z=check[l-1].first+check[l-2].first;
                k=min(x,min(y,z)); k/=2.0;
                if(k>mi){
                    mi=k; ans.clear();
                    ans.push_back(check[l-2].second);
                    ans.push_back(check[l-1].second);
                }
            }
        }

        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<' ';
    }
}

