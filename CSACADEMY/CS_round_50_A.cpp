#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    cin>>ss;
    int n=0,s=0,w=0,e=0;
    for(int i=0;i<ss.size();i++){
        if(ss[i]=='N')n++;
        else if(ss[i]=='S')s++;
        else if(ss[i]=='W')w++;
        else e++;
    }
    cout<<abs(n-s)+abs(e-w)<<endl;
}
