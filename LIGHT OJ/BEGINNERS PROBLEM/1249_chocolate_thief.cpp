#include<bits/stdc++.h>
using namespace std;
struct my
{
    string s1;
    int i,j,k,sum;
}s[110];

int main()
{
    int t,caseno=0,n;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s[i].s1>>s[i].i>>s[i].j>>s[i].k;
            s[i].sum=s[i].i*s[i].j*s[i].k;
        }
        string g;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i].sum>s[j].sum){
                    s[i].sum=s[i].sum^s[j].sum;
                    s[j].sum=s[i].sum^s[j].sum;
                    s[i].sum=s[i].sum^s[j].sum;
                    g=s[j].s1;
                    s[j].s1=s[i].s1;
                    s[i].s1=g;
                }
            }
        }
        if(s[0].sum==s[n-1].sum){
            printf("Case %d: no thief\n",++caseno);
        }
        else{
            cout<<"Case "<<++caseno<<": "<<s[n-1].s1<<" took chocolate from "<<s[0].s1<<endl;
        }
    }
}
