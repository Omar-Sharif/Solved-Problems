#include<bits/stdc++.h>
using namespace std;
int ara[110];

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
        int flag=0,sum,c;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s);
        sum=0,c=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==' '){
                sum+=c;
                c=0;
            }
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u' or s[j]=='y'){
                c++;
            }
        }
       // cout<<sum<<' '<<c<<endl;
        sum+=c;
        //cout<<sum<<' '<<ara[i]<<endl;
        if(sum!=ara[i])flag=1;
    }
    if(flag==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

