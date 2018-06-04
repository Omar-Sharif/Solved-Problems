#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l[5],s[5],r[5],p[5];
    for(int i=1;i<=4;i++){
        cin>>l[i]>>s[i]>>r[i]>>p[i];
    }

    if(p[1]==1 and(l[2]==1 or s[3]==1 or r[4]==1 or s[1]==1 or l[1]==1 or r[1]==1))
        cout<<"YES"<<endl;
    else if(p[2]==1 and(l[3]==1 or s[4]==1 or r[1]==1 or s[2]==1 or l[2]==1 or r[2]==1))
        cout<<"YES"<<endl;
    else if(p[3]==1 and(l[4]==1 or s[1]==1 or r[2]==1 or s[3]==1 or l[3]==1 or r[3]==1))
        cout<<"YES"<<endl;
    else if(p[4]==1 and(l[1]==1 or s[2]==1 or r[3]==1 or s[4]==1 or l[4]==1 or r[4]==1))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
