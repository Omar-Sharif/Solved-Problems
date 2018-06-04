#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int l=s.length();
        int flag=0,flag1=0;
        for(int i=0;i<l;i++){
            if((s[i]=='A'&&s[i+1]=='B')&&flag==0){
                if(i+2<l){
                        if(s[i+2]=='A'){
                            i+=2;
                        }
                        else{
                            flag==1;
                            i++;
                        }
                }
                else{
                    flag==1;
                    i++;
                }
            }
            else if((s[i]=='B'&&s[i+1]=='A')&&flag1==0){
                if(i+2<l){
                        if(s[i+2]=='B'){
                            i+=2;
                        }
                        else{
                            flag1=1;
                            i++;
                        }
                }
                else{
                    flag1=1;
                    i++;
                }
            }

            if(flag==1&&flag1==1)
                break;
        }
        if(flag1==1&&flag==1)
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
}
