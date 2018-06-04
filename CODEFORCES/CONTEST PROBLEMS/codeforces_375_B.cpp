#include<bits/stdc++.h>
using namespace std;
string s,s1;
int main()
{
    int n;
    while(cin>>n){
        cin>>s;

        int mx=0,c=0,a=0,b=0,d=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' or s[i]=='_'){
               // cout<<c<<' '<<i<<endl;
                mx=max(mx,c);
                c=0;
            }
            if(s[i]=='('){
                int j,d=0;
             for(j=i+1;j<n;j++){
                if(s[j]=='_' or s[j]==')'){
                    b+=d;
                    d=0;
                }
                if((s[j]>='a' and s[j]<='z') or (s[j]>='A' and s[j]<='Z'))d=1;
                if(s[j]==')'){
                    i=j;
                    break;
                }
           // cout<<b<<' '<<i<<endl;
             }
            }
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))c++;
        }
        mx=max(mx,c);
        cout<<mx<<' '<<b<<endl;
    }
}

