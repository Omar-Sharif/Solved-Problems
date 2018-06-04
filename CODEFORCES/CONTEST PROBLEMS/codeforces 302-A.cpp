#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n){
            string s,s1[27];
        cin>>s;
        int l=s.length();
         int j=0,flag1=0;
        if(n==1){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{
            int count=0;
        s1[j]=s[0];
         for(int i=1;i<l;i++){
                int flag=0;
                if(s[i-1]==s[i]){
                    s1[j]+=s[i];
                }
                else{
                    for(int k=0;k<=j;k++){
                        if(s[i]==s1[k][0]){
                            flag=1;
                            break;
                        }
                    }
                        cout<<flag<<' '<<s[i]<<endl;
                        if(flag==1)
                            s1[j]+=s[i];
                        if(flag!=1){
                            count++;
                            cout<<count<<endl;
                            if(count==n){
                                for(int m=i;m<l;m++){
                                    flag1=1;
                                   s1[j]+=s[m];
                                }
                            }
                                j++;
                            s1[j]+=s[i];
                        }
                    }
                if(flag1==1)
                    break;
            }
            if(flag1==1){
                    cout<<"YES"<<endl;
                    for(int i=0;i<=j;i++)
                        cout<<s1[i]<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
