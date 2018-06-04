#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    int n;
    cin>>n;
    string s;

    int count=1;
    for(int i=0;i<n;i++){
        if(count>4)count=1;
        if(count==1 or count==2)s+='a';
        else s+='b';
        count++;
    }
    cout<<s<<endl;
}

