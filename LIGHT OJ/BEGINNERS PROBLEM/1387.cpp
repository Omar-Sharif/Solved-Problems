#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sum,k;
    string s1,s2,s3;
    s1="donate";
    s2="report";

    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        sum=0;
        printf("Case %d:\n",i);
        for(int j=0;j<n;j++){
            cin>>s3;
            if(s3==s1){
                cin>>k;
                sum+=k;
            }
            else cout<<sum<<endl;
        }

    }
}
