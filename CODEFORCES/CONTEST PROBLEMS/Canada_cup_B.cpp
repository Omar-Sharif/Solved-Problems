#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 100010
#define lli long long
map<char,int>my;

void check()
{
    my['f']=1;my['e']=2;my['d']=3;
    my['a']=4;my['b']=5;my['c']=6;
}
int main()
{
    string s;
    lli a,b,c,d,count;
    check();

    while(cin>>s){
        int l=s.length();
        char ch=s[l-1];
        count=0;

        c=1;a=0;
        for(int i=l-2;i>=0;i--){
            a+=(s[i]-'0')*c;
            c*=10;
            //cout<<a<<' '<<s[i]<<' '<<c<<endl;
        }
       // cout<<a<<endl;
        b=(a/4);
        c=a%4;
        if(c==0){
            if(b>0)b=b-1;
        }
        count=b*16;
        if(count<0)count=0;
        //cout<<count<<' '<<c<<endl;

        if(c==1 or c==3)count+=my[ch];
        else count+=my[ch]+7;
        cout<<count<<endl;

    }
}

