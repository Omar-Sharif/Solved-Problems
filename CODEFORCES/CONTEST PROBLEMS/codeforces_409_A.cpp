#include<bits/stdc++.h>
using namespace std;

int ara[110];
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='V' and s[i+1]=='K'){
            count++;
            ara[i]=1;
            ara[i+1]=1;
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]=='V' and ara[i]==0 and s[i+1]=='V' and ara[i+1]==0){
            count++;
            break;
        }
        if(s[i]=='K' and ara[i]==0 and s[i+1]=='K' and ara[i+1]==0){
            count++;
            break;
        }
    }
    cout<<count<<endl;
}

