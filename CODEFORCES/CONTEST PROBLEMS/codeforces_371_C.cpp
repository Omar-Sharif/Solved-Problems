#include<bits/stdc++.h>
using namespace std;

map<string,int>coun;

int main()
{
    int t;
    cin>>t;
    char c;
    string s,s1;

    while(t--){
        cin>>c>>s;
        s1=s;

        reverse(s1.begin(),s1.end());
        for(int i=s1.length();i<=19;i++)
            s1+='0';

        reverse(s1.begin(),s1.end());
        for(int i=0;i<s1.length();i++){
             if(s1[i]=='2' or s1[i]=='4' or s1[i]=='6' or s1[i]=='8' or s1[i]=='0')
                s1[i]='0';
            else s1[i]='1';
        }
        s=s1;

        if(c=='+'){
            coun[s1]++;
        }
        else if(c=='-'){
            coun[s1]--;
        }
        else{
          cout<<coun[s1]<<endl;
        }
    }
}
