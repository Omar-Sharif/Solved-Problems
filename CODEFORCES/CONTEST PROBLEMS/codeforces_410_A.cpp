#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2;
    cin>>s;
    int n=s.length();
    if(n==1){
        cout<<"YES"<<endl;
        return 0;
    }
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s==s1 and n%2==0){
            cout<<"NO"<<endl;
            return 0;
    }

    int count=0;
    for(int i=0,j=n-1;i<j and j>i;i++,j--){
        if(s[i]!=s[j])count++;
    }
    if(count<=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

