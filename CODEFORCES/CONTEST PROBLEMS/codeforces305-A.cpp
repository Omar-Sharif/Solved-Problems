#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    int k;
    while(cin>>s>>k){
        int k;
        cout<<1<<endl;
        int l=s.length();
        cout<<l<<endl;
        int m=l/k;
        int count=0;
        for(int i=0;i<10;i+=m){
                string s1;
            for(int j=i;j<m;j++){
                s1+=s[j];
            }
            s2=s1;
            reverse(s1.begin(),s1.end());
            cout<<s1<<endl;
            if(s1==s2)
                count++;
        }
        if(count==k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

