#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,k,l;
    string s,s1;
    cin>>n;
    for(l=1;l<=n;l++)
    {
        int m,j=0;
        cin>>s;
        int x=s.length();
        for(i=0;i<x;i=i+m)
        {
            m=1;
            if(s[i]-'0'>=1&&s[i]-'0'<=9){
                if(s[i+1]-'0'>=0&&s[i+1]-'0'<=9){
                    m++;
                    int b=(10*(s[i]-'0')+(s[i+1]-'0'));
                    if(s[i+2]-'0'>=0&&s[i+2]-'0'<=9){
                            m++;
                        for(int r=0;r<b*10+s[i+2]-'0'-1;r++){
                            s1[j]=s[i-1];
                            j++;
                        }
                    }
                    else{
                        for(k=0;k<b-1;k++){
                            s1[j]=s[i-1];
                            j++;
                        }
                    }
                }
                else{
                    for(int o=0;o<s[i]-'0'-1;o++){
                        s1[j]=s[i-1];
                        j++;
                    }
                }
            }
            else{
                s1[j]=s[i];
                j++;
            }
        }
        cout<<"Case "<<l<<": ";
        for(int q=0;q<j;q++)
            cout<<s1[q];
        cout<<endl;
    }
    return 0;
}
