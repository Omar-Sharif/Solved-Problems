#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='x'){
            if(count>2)ans+=count-2;
            count=0;
        }
        else count++;
    }
    if(count>2)
        ans+=count-2;

    cout<<ans<<endl;
}
