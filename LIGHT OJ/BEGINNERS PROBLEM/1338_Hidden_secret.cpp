#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseno=0;
    cin>>t;
    getchar();
    while(t--){
        string s1,s2,s3,s4;
        getline(cin,s1);
        getline(cin,s2);
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=' '){
                if(s1[i]>='A'&&s1[i]<='Z'){
                    s3+=s1[i]+32;
                }
                else s3+=s1[i];
            }
        }

        for(int i=0;i<s2.length();i++){
            if(s2[i]!=' '){
                if(s2[i]>='A'&&s2[i]<='Z'){
                    s4+=s2[i]+32;
                }
                else s4+=s2[i];
            }
        }
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
       // cout<<s3<<' '<<s4<<endl;
        if(s3==s4)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);
    }
}

