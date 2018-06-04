#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int flag=0,count1=0,count2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' and flag==0){
            count1++;
        }
        else if(s[i]=='1'){
            flag=1;
            count2=0;
        }
        else if(s[i]=='0' and flag==1){
            count2++;
        }
    }
    int  mx=0,count=0;;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')flag=1;
        if(s[i]=='1' and flag==1){
            mx=max(mx,count);
            count=0;
        }
        else if(flag==1)count++;
    }
    //cout<<count1<<' '<<count2<<' '<<mx<<endl;
    if(count1==n)cout<<n*k<<endl;
    else cout<<max(count1+count2,mx)<<endl;
}
