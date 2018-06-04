#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s>>s1){
            string s3;
        int l=s.length();

        int count=0;
        for(int i=0;i<l;i++){
            if(s[i]!=s1[i])
                count++;
        }
        if(count%2!=0)
            cout<<"impossible"<<endl;
        else{
                int flag=1;
            for(int i=0;i<l;i++){
                if(s[i]==s1[i])
                    s3+=s[i];
                else if(s[i]!=s1[i]&&flag==1){
                    s3+=s[i];
                    flag=2;
                }
                else if(s[i]!=s1[i]&&flag==2){
                    s3+=s1[i];
                    flag=1;
                }
            }
             cout<<s3<<endl;
        }

    }
    return 0;
}
