#include<bits/stdc++.h>
using namespace std;
string my(int a)
{
    string s1;
    while(a>0){
            int j=a%2;
            s1+=j+'0';
            a/=2;
        }
        for(int j=s1.length();j<8;j++){
            s1+='0';
        }
        reverse(s1.begin(),s1.end());
        return s1;
}
int main()
{
    int t,caseno=0;
    cin>>t;
    string s1;
    int a,b,c,d,ara[5];
    char ch;
    while(t--){
        string s;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        cin>>s1;
        int m=1;
        ara[1]=a,ara[2]=b;ara[3]=c,ara[4]=d;
        while(m<5){
              if(m<4){
                s+=my(ara[m]);
                s+='.';
              }
              else
                s+=my(ara[m]);
                m++;
        }
        if(s==s1)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);
    }
}
