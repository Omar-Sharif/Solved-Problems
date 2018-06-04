#include<bits/stdc++.h>
using namespace std;

stack<string>st;
string s[500010],a,b,c;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    st.push(s[n]);

    for(int i=n-1;i>=1;i--){
        a=s[i]; b=st.top(); c='#';
        for(int i=1;i<b.length();i++){
            if(a[i]<b[i]){
                c=a;
                break;
            }
            if(a[i]==b[i])c+=a[i];
            else break;
        }
        st.push(c);
    }

    while(!st.empty()){
        a=st.top();
        cout<<a<<endl;
        st.pop();
    }
}
