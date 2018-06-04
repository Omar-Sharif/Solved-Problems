#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,count1=0;
    string s,s1;
    cin>>n;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='x')
            count++;
        else
            count1++;
    }

    if(count==count1){
        cout<<0<<endl;
        cout<<s<<endl;
    }
    else if(count>count1){
        int m=(count-count1)/2;
        cout<<m<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='x'&&m>0){
                s1+='X';
                m--;
            }
            else
                s1+=s[i];
        }
        cout<<s1<<endl;
    }
    else if(count1>count){
        int m=(count1-count)/2;
        cout<<m<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='X'&&m>0){
                s1+='x';
                m--;
            }
            else
                s1+=s[i];
        }
        cout<<s1<<endl;
    }
    return 0;
}
