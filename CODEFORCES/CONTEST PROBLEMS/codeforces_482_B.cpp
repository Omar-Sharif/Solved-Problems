#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli mxx[5];
map<char,lli>my;
string s1,s2,s3;

lli check()
{
    lli mx=0;
    for(char i='A';i<='Z';i++){
        mx=max(mx,my[i]);
    }
    for(char i='a';i<='z';i++){
        mx=max(mx,my[i]);
    }
    return mx;
}

void cn(string d)
{
    for(int i=0;i<d.size();i++){
        my[d[i]]++;
    }
}

int main()
{
    lli n;
    cin>>n;
    cin>>s1>>s2>>s3;
    lli k=s1.size(),l;

    my.clear();
    cn(s1); l=check();
    if(l==k and n==1)mxx[1]=k-1;
    else mxx[1]=min(k,l+n);
    my.clear();

    cn(s2); l=check();
    if(l==k and n==1)mxx[2]=k-1;
    else mxx[2]=min(k,l+n);
    my.clear();

    cn(s3); l=check();
    if(l==k and n==1)mxx[3]=k-1;
    else mxx[3]=min(k,l+n);
    my.clear();

    lli count=0,mx=0,ans=0;
    for(int i=1;i<=3;i++){
        mx=max(mx,mxx[i]);
    }
    for(int i=1;i<=3;i++){
        if(mxx[i]==mx){
            count++;
            ans=i;
        }
    }

    if(count>1){
        cout<<"Draw"<<endl;
    }
    else{
        if(ans==1)cout<<"Kuro"<<endl;
        else if(ans==2)cout<<"Shiro"<<endl;
        else cout<<"Katie"<<endl;
    }

}

