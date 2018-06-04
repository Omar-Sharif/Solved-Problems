#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;

    while(cin>>s>>s1)
    {
        int count=0;
        int l=s.length();
        int l1=s1.length();

        char c=s1[0];

        for(int i=0;i<l-l1+1;i++){
            //cout<<i<<' '<<s[i]<<endl;
            if(s[i]==c){
                   // cout<<i<<' '<<s[i]<<endl;
                    int k=0,flag=0;
                for(int j=i;j<i+l1;j++){
                       // cout<<s[j]<<' '<<s1[k]<<endl;
                    if(s[j]!=s1[k]){
                        flag=1;
                        break;
                    }
                    k++;
                }
                if(flag==0){
                    count++;
                    i+=l1-1;
                }
            }
        }
        cout<<count<<endl;
    }
}
