#include<bits/stdc++.h>
using namespace std;

map<string,int>my;
string  s;

int main()
{

    while(cin>>s){
        int mx=0,c=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<=n and i+j<=n;j++){
                string ss=s.substr(i,j);
                my[ss]++;
            }
        }
        string ans;
        for(int i=0;i<my.size();i++){
            for(int j=1;j<=n and i+j<=n;j++){
                string ss=s.substr(i,j);
                //cout<<ss<<' '<<my[ss]<<' '<<mx<<endl;
                if(my[ss]>mx)ans=ss;
                if(my[ss]==mx){
                    if(ss.size()>ans.size())ans=ss;
                    else if(ss.size()==ans.size()){
                        if(ss<ans)ans=ss;
                    }
                }
                mx=my[ans];
            }
        }
        cout<<ans<<endl;
    }
}
