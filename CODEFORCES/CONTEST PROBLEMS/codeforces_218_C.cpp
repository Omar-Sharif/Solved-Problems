#include<bits/stdc++.h>
using namespace std;

long long k[5],value[5],r;
map<char,int>num;
string s;

int main()
{

    while(cin>>s){
        for(int i=0;i<s.length();i++)
                num[s[i]]++;

        for(int i=0;i<3;i++)
            cin>>k[i];
        for(int i=0;i<3;i++)
            cin>>value[i];

        cin>>r;
        long long b,c,s,ans=0,low=0,high=10000000000000,mid,sum;

        while(low<=high){
            sum=0;
            mid=(low+high)/2;
            b=num['B']*mid;c=num['C']*mid;s=num['S']*mid;
            if(b>k[0])sum+=(b-k[0])*value[0];
            if(s>k[1])sum+=(s-k[1])*value[1];
            if(c>k[2])sum+=(c-k[2])*value[2];
            if(sum<=r){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans<<endl;
    }
}
