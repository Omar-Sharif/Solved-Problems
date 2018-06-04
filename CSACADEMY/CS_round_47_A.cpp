#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,sum=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
            count++;
        else{
            if(count>0)sum+=count-1;
            count=0;
        }
    }
    if(count>0)sum+=count-1;
    cout<<sum<<endl;
}
