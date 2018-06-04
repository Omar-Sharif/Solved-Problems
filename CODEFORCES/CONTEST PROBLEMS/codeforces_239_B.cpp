#include<bits/stdc++.h>
using namespace std;
int ara[1000],ara1[1000];
int main()
{
    string s,s1;
    cin>>s>>s1;

    for(int i=0;i<s.length();i++){
        ara[s[i]]++;
    }
    for(int i=0;i<s1.length();i++){
        ara1[s1[i]]++;
    }
    long long count=0,flag=0;

    for(char i='a';i<='z';i++){
        if(ara[i]==0 && ara1[i]>0){
            count=-1;
            break;
        }
       if(ara[i]>=ara1[i]){
        count+=ara1[i];
       }
       else
        count+=ara[i];
    }
    cout<<count<<endl;
}
