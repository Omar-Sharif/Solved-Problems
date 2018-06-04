#include<bits/stdc++.h>
using namespace std;

string s;
int ara[30];

int main()
{
    while(cin>>s){
        int l=s.length();
        memset(ara,0,sizeof(ara));

        for(int i=0;i<l;i++){
            ara[s[i]-'a']^=1;
        }
        int odd=0;

        for(int i=0;i<=26;i++){
            //cout<<ara[i]<<endl;
            odd+=ara[i];
        }

        if(odd>1 and odd%2==0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}
