#include<bits/stdc++.h>
using namespace std;
string s[100],s1[100],f[100];
int vis[100];

int check(string x,string y)
{
    int v;
    string ccc[100],a;

    a=y;
    int l=y.size();

    for(int i=0;i<l;i++){
        string ff;
        for(int j=i;j<i+l;j++){
            int x=j;
            if(x>=j)x=x%l;
            ff+=a[x];
        }
        ccc[i]=ff;
    }
    v=-1;
    for(int i=0;i<l;i++){
         //   cout<<x<<' '<<ccc[i]<<endl;
        if(x==ccc[i]){
            v=i;
            break;
        }
    }
    return v;
}
int main()
{
    string a,b,c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>s[i];
            s1[i]=s[i];
    }

    a=s[0];
    int l=a.size();

    for(int i=0;i<l;i++){
        string ff;
        for(int j=i;j<i+l;j++){
            int x=j;
            if(x>=j)x=x%l;
            ff+=a[x];
        }
        f[i]=ff;
    }

    int count=10000,value=0;;

    for(int i=0;i<l;i++){
        a=f[i];
        value=0;
        for(int j=0;j<n;j++){
            int c=check(a,s[j]);
            if(c==-1){
                cout<<-1<<endl;
                return 0;
            }
            if(c==-1)return 0;
            value+=c;
        }
        //cout<<a<<' '<<value<<endl;
        count=min(count,value);
    }
    if(count==10000)count=-1;
    cout<<count<<endl;
}
