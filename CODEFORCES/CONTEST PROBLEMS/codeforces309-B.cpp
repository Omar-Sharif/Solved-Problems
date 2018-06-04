#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        string s[n+1];

        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int count=1,count1;
        for(int i=0;i<n;i++){
            if(s[i]!="0"){
                    count1=1;
                for(int j=i+1;j<n;j++){
                if(s[j]==s[i]){
                    count1++;
                    s[j]="0";
                }
            }
        if(count1>=count)
            count=count1;
        }
        }
        cout<<count<<endl;
    }
    return 0;
}

