#include<bits/stdc++.h>
using namespace std;

#define lli long long
string s,s1;
lli Big_Int_Mod(lli rs,int i,lli m)
{
    if(i>=s.size())return rs;
    rs=(rs*10)%m+s[i]-'0';
    return Big_Int_Mod(rs%m,i+1,m);
}

int main()
{
    lli m;
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        cin>>s1;
        scanf("%lld",&m);

        for(int i=0;i<s1.size();i++){
            if(s1[i]=='-')continue;
            s+=s1[i];
        }

        printf("Case %d: ",++cs);
        if(Big_Int_Mod(0,0,m)==0)printf("divisible\n");
        else printf("not divisible\n");
        s.clear();s1.clear();
    }
}
