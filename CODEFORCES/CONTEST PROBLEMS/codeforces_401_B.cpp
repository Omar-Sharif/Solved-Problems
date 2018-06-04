#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    int n;
    cin>>n;
    string s,s1,s2,s3;
    cin>>s>>s1;

    s3=s;
    s2=s1;

    sort(s3.begin(),s3.end());
    sort(s1.begin(),s1.end());

    int count=0,i=0,j=0;
    while(j<s3.length() and i<s1.length()){
        if(s3[i]>s1[j]){
            count++;
            j++;
        }
        if(s3[i]<=s1[j]){
            i++; j++;
        }
    }
    cout<<count<<endl;

    int count1=0;
    j=0;
    sort(s.begin(),s.end());
    for(i=0;i<s.length();i++){
        while(j<s1.length()){
            if(s[i]<s1[j]){
                count1++;
                j++;
                break;
            }
            j++;
        }
    }
    cout<<count1<<endl;
}

