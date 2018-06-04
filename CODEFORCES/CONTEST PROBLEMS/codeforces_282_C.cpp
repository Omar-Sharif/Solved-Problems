#include<bits/stdc++.h>
using namespace std;

int ara[100010];
string s;

int main()
{
    while(cin>>s){
        int n=s.length();

        for(int i=0;i<n;i++)ara[i]=1;
        int count1=0,count2=0,flag=1;

        for(int i=0;i<n;i++){
            if(s[i]=='(')count1++;
            else count2++;
        }

        if(count2<=count1){
            for(int i=n-1;i>=0;i--){
                if(s[i]=='#'){
                    ara[i]+=count1-count2;
                    break;
                }
            }
            count1=0,count2=0;
            for(int i=0;i<n;i++){
               // cout<<i<<' '<<s[i]<<' '<<ara[i]<<endl;
                if(s[i]=='(')count1+=ara[i];
                else count2+=ara[i];
                if(count2>count1){
                    flag=0;
                    break;
                }
            }
        }
        else flag=0;

        if(flag==0)cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++)
                if(s[i]=='#')
                cout<<ara[i]<<endl;
        }
    }
}
