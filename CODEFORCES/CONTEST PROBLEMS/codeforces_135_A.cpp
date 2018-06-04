#include<bits/stdc++.h>
using namespace std;
int ara[30];
bool ara1[30];
int main()
{
    int k;
    string s;
    while(cin>>k){
        cin>>s;
        memset(ara,0,sizeof(ara));
        memset(ara1,0,sizeof(ara1));
        for(int i=0;i<s.length();i++){
            ara[s[i]]++;
            ara1[s[i]]=1;
        }
        string s1;
        int flag=0;
        for(char i='a';i<='z';i++){
            if(ara1[i]==1){
                if(ara[i]!=k){
                    flag=1;
                    break;
                }
                else s1+=i;
            }
        }
        if(flag==1) cout<<-1<<endl;
        else{
            for(int i=0;i<k;i++)
                cout<<s1;
            cout<<endl;
        }
    }
}
