#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s){
        int x=s.length(),count=0;
        int flag=0;
        if(s[0]=='-'){
            cout<<'(';
            for(int i=0;i<x;i++){
            if(s[i]=='.'){
                break;
            }
            count++;
        }
        int j=0,c=count;
            cout<<'$';
            for(int i=1;i<c;i++){
                cout<<s[i];
                count--;
             if(count%3==1&&count!=1)
                cout<<',';
        }
        cout<<'.';
            if(c==x){
                cout<<'0'<<'0';
            }
            else if(c+2==x)
                cout<<s[c+1]<<'0';
            else{
                cout<<s[c+1]<<s[c+2];
            }
        cout<<')';
    }
    else{
            for(int i=0;i<x;i++){
            if(s[i]=='.'){
                break;
            }
            count++;
        }
        int j=0,c=count;
            cout<<'$';
            for(int i=0;i<c;i++){
                cout<<s[i];
                count--;
             if(count%3==0&&count!=0)
                cout<<',';
        }
        cout<<'.';
            if(c==x){
                cout<<'0'<<'0';
            }
            else if(c+2==x)
                cout<<s[c+1]<<'0';
            else{
                cout<<s[c+1]<<s[c+2];
            }
    }
    cout<<endl;
    }
    return 0;
}

