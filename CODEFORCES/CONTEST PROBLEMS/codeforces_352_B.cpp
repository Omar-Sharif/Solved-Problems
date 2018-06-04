#include<bits/stdc++.h>
using namespace std;
map<char,bool>my;
map<char,int>my1;

int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        cin>>s;
        for(int i=0;i<s.length();i++){
                my1[s[i]]++;
                my[s[i]]=1;
        }
        int sum=0;
        int count=0;
        for(char i='a';i<='z';i++){
           // cout<<my1[i]<<endl;
            if(my1[i]!=0)sum+=my1[i]-1;
            if(my[i]==1)count++;
        }
        if(sum<=26-count)cout<<sum<<endl;
        else cout<<-1<<endl;
        //cout<<count<<' '<<sum<<endl;
    }
}
