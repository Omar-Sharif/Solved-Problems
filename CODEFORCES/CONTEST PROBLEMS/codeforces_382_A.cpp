#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int main()
{
    string s;
    int n,k;
    while(cin>>n>>k)
    {
        cin>>s;
        int src,d;
        for(int i=0;i<n;i++){
            if(s[i]=='G')src=i;
            if(s[i]=='T')d=i;
        }

        int flag=0;
        for(int i=src;i<n;i+=k){
            if(s[i]=='T'){
                    flag=1;
                    break;
            }
            if(s[i]=='#')break;
        }

        for(int i=src;i>=0;i-=k){
             if(s[i]=='T'){
                    flag=1;
                    break;
            }
            if(s[i]=='#')break;
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
