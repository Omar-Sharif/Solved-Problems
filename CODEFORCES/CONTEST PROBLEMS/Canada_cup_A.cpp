#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 100010
#define lli long long

int main()
{
    string s,s1;
    int count,n;
    while(cin>>n){
        cin>>s;
        count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='>')break;
            else count++;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='<')break;
            else count++;
        }
        cout<<count<<endl;
    }
}
