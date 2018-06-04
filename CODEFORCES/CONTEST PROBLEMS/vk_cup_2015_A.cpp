#include<bits/stdc++.h>
using namespace std;

map<string,int>my;
string s,s1,s2;
vector<int>edges[1000];
int vis[500];
string tolow(string s)
{
    for(int j=0;j<s.length();j++)
        if(s[j]>='A' and s[j]<='Z')
            s[j]+=32;
    return s;
}

int dfs(int x,int c)
{
    vis[x]=1;
    int v=c;
    for(int i=0;i<edges[x].size();i++){
        int u=edges[x][i];
       // cout<<x<<' '<<u<<' '<<vis[u]<<endl;
        if(vis[u]==1)continue;
        v=max(v,dfs(u,c+1));
    }
   // cout<<x<<' '<<c<<endl;
    return v;
}
int main()
{
    int n;
    while(cin>>n){

        int c=1,a,b;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            cin>>s>>s1>>s2;
            s=tolow(s);
            s2=tolow(s2);
            //cout<<s<<' '<<s2<<' '<<my[s2]<<' '<<my[s]<<endl;
            if(my[s2]==0){
                my[s2]=c;
                c++;
            }
            if(my[s]==0){
                my[s]=c;
                c++;
            }
            b=my[s];a=my[s2];
            edges[a].push_back(b);
        }
        s="polycarp";
        a=my[s];
        cout<<dfs(a,1)<<endl;
    }
}
