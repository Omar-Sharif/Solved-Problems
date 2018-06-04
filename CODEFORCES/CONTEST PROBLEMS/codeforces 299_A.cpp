#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int x=s.length();
        string s1;
        for(int i=x-1;i>=0;i--){
                int b=s[i]-'0';
            int a=9-b;
            if(i==0&&a==0)
                s1+=b+'0';
           else if(a<b)
                s1+=a+'0';
            else
                s1+=s[i];
        }
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl;
    }
    return 0;
}
