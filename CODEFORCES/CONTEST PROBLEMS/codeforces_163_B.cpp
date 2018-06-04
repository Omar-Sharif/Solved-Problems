#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string s,s2;
        cin>>s;

        int l=s.length();

        for(int j=1;j<=m;j++){
            string s1;
            for(int i=0;i<l;i++){
                if(s[i]=='B'){
                    if(s[i+1]=='G'){
                        s1+='G';
                        s1+='B';
                        i++;
                    }
                    else{
                      s1+=s[i];
                    }
                }
                else{
                    s1+=s[i];
                }
            }
            //cout<<s1<<endl;
            s=s1;
        }
        cout<<s<<endl;
    }

}
