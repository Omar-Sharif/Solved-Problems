#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int x=s.length();
        int count=0,flag;
        for(int i=0;i<x;i++){
                flag=0;
            for(int j=0;j<i;j++){
                if(s[i]==s[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                count++;
        }
        if(count%2==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
