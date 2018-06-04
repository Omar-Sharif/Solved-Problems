#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        string s[n+1],s1,s2,str;
        int ara[n+1],temp;
        memset(ara,0,sizeof(ara));
        int j=1,k,flag;
        for(int i=1;i<=n;i++){
            cin>>s1;
            getline(cin,s2);
            flag=0;
            for(k=1;k<j;k++){
                if(s1==s[k]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                s[j]=s1;
                ara[j]+=1;
                j++;
            }
            else{
                ara[k]+=1;
            }
        }
        for(int m=1;m<j-1;m++){
            for(int n=m+1;n<j;n++){
                if(s[m]>s[n]){
                    str=s[m];
                    s[m]=s[n];
                    s[n]=str;
                    temp=ara[m];
                    ara[m]=ara[n];
                    ara[n]=temp;
                }
            }
        }
        for(int m=1;m<j;m++)
            cout<<s[m]<<' '<<ara[m]<<endl;
    }
    return 0;
}
