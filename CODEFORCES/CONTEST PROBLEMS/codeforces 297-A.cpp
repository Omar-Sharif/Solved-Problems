#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s,s1,s2;
    while(cin>>n){
        cin>>s;
        int x=s.length();
        int count=0;
        int flag=0;
        for(int i=0;i<x;i=i+2){
            flag=0;
            for(int j=i+1;j<x;j=j+2){
                if(s[i]==s[j]+32){
                    s[j]='0';
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                count++;
         }
        cout<<count<<endl;

    }

    return 0;
}
