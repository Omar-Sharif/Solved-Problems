#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    int n,a,b,x,y,m,o;
    long sum=0;
   // s1="0123456789";
    while(cin>>n){
            cin>>s;
            cin>>s1;
            for(int i=0;i<n;i++){
                a=(s[i]-'0');
                b=(s1[i]-'0');
                x=abs(a-b);
                if(x>5){
                    x=10-x;
                }
                sum+=x;
            }
            cout<<sum<<endl;
    }
    return 0;
}
