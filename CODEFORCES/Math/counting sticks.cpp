#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int count1=0,count2=0,count3=0,flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+')
                flag=1;
            else if(s[i]=='=')
                flag=2;
            else if(flag==0)
                count1++;
            else if(flag==1)
                count2++;

            else if(flag==2)
                count3++;
        }
        if(count1+count2==count3){
            cout<<s<<endl;
        }
        else if(count1+count2==count3-2&&(count3%2!=0)){
            for(int i=0;i<count1+1;i++)
                cout<<'|';
            cout<<'+';
            for(int i=0;i<count2;i++)
                cout<<'|';
            cout<<'=';
            for(int i=0;i<count3-1;i++)
                cout<<'|';
            cout<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}
