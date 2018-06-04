#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int count=0;
        for(int i=0;s[i]!=NULL;i++){
            if(s[i]=='4'||s[i]=='7')
                count++;
        }
        if(count==7||count==4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
