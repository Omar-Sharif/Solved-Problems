#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int vis[500];

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int mxx=0,count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z'){
            //cout<<count<<endl;
            mxx=max(mxx,count);
            count=0;
            memset(vis,0,sizeof vis);
        }
        else{
            //cout<<s[i]<<' '<<vis[s[i]]<<endl;
            if(vis[s[i]]==0)count++;
            vis[s[i]]=1;
        }
    }
    mxx=max(mxx,count);
    cout<<mxx<<endl;
}

