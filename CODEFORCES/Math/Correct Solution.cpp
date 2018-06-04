#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s)
    {
        cin>>s1;
        sort(s.begin(),s.end());
        int i=0,flag=0;
        for(i=0;s[i]=='0';i++){
                flag=1;
        }
        if(flag==1&&s!="0")swap(s[0],s[i]);
        if(s==s1)
            cout<<"OK"<<endl;
        else
            cout<<"WRONG_ANSWER"<<endl;
    }
}
