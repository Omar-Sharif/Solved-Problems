#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int main()
{
    string s;
    while(cin>>s){
        int mxx=1,c=0,l=s.length(),flag=0;
        for(int i=0;i<l;i++){
                c++;
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y'){
                mxx=max(c,mxx);
                flag=1;
                c=0;
            }
        }
        c++;
        mxx=max(c,mxx);
        cout<<mxx<<endl;
    }
}
