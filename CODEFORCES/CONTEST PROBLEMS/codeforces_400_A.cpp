#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

string s[1010],s1[1010];

int main()
{
    int n;
    cin>>s[0]>>s1[0];
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>s[i]>>s1[i];
    }

    cout<<s[0]<<' '<<s1[0]<<endl;
    string a=s[0];
    string b=s1[0];
    for(int i=1;i<=n;i++){
        cout<<s1[i]<<' ';
        if(s[i]==a){
            cout<<b<<endl;
            a=s1[i];
        }
        else{
            cout<<a<<endl;
            b=s1[i];
        }
    }
}
