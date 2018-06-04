#include<bits/stdc++.h>
using namespace std;

string str[1010];

int main()
{
    int n;
    cin>>n;
    string s,strmx;
    cin>>s;
    for(int i=0;i<n;i++)strmx+='9';

    for(int i=0;i<n;i++){
        string a;
        for(int count=1,j=i;count<=n;j++,count++){
            int v=j%n;
            a+=s[v];
        }
        str[i]=a;
    }
    for(int i=0;i<n;i++){
        s=str[i];
        string a;
        for(int k=1;k<=10;k++){
            string a;
            for(int j=0;j<s.size();j++){
                int v=s[j]-'0';
                v+=k;v%=10;
                a+=(v+'0');
            }
            if(a<strmx)strmx=a;
        }
    }
    cout<<strmx<<endl;
}
