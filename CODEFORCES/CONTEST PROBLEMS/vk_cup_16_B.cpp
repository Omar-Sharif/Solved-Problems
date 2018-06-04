#include<bits/stdc++.h>
using namespace std;
stack<string>ara;
map<string,bool>vis;

int main()
{
    int n;
    string s;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>s;
            ara.push(s);
        }
        while(!ara.empty()){
            s=ara.top();ara.pop();
            if(vis[s]==1)continue;
            cout<<s<<endl;
            vis[s]=1;
        }
    }
}
