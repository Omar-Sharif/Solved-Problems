#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans,st="aeoiu";
    cin>>s;
    ans=s[0];
    char prevc=s[0],c=s[0];
    int count=1;
    int f=0;

    for(int j=0;j<st.size();j++){
        if(c==st[j])f=1;
    }
    if(f==1) count=0;

    for(int i=1;i<s.size();i++){
        c=s[i];
        f=0;
        for(int j=0;j<st.size();j++){
            if(c==st[j])f=1;
        }
        //cout<<c<<' '<<prevc<<' '<<f<<' '<<count<<endl;
        if(f==1){
            count=0;
            ans+=c;
        }
        else{
            if(c==prevc){
                ans+=c;
                count=2;
            }
            else{
                count++;
                if(count==3){
                    char d=' ';
                    ans+=d;
                    count=1;
                }
                ans+=c;
            }
        }
        prevc=c;
    }
    cout<<ans<<endl;


}
