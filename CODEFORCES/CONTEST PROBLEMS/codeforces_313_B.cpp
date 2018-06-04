#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
int value[mx];


int main()
{
    string s;
    cin>>s;

    int c=0,m,l,r;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i-1] and i!=0)c++;
        value[i+1]=c;
    }
    cin>>m;
    while(m--){
        scanf("%d %d",&l,&r);
        printf("%d\n",value[r]-value[l]);
    }
}
