#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str,str1[30];
    cin>>t;
    char i=getchar();
    while(t--){
        getline(cin,str);
        int x=str.length();
        string s;
        for(int i=0;i<x;i++){
            if(str[i]>='A'&&str[i]<='Z')
                s+=str[i]+32;
            else if(str[i]>='a'&&str[i]<='z')
                s+=str[i];
        }
        sort(s.begin(),s.end());
        int count=0,m=0,j=0;
        for(int i=0;s[i]!='\0';i=i+count){
                char ch=s[i];
                count=0;
            for(int n=i;s[n]!='\0';n++){
                    if(s[n]==ch)
                        count++;
                    else break;
                }
            if(count>m){
                str1==0;
                j=0;
                m=count;
                str1[j]=s[i];
                j++;
            }
            else if(count==m){
                str1[j]=s[i];
                j++;
            }
        }

        for(int k=0;k<j;k++)
            cout<<str1[k];
        cout<<endl;
    }
    return 0;
}
