#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s){
        cin>>s1;
        for(int i=0,j=0;s[i]!='\0';i++,j++){
            if(s[i]==s1[j])
                cout<<0;
            else
                cout<<1;
        }
        cout<<endl;
    }
    return 0;
}
