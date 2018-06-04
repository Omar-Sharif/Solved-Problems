#include<bits/stdc++.h>
using namespace std;

stack<string>Forward,Back,Curr;
string s,s1,s2;
char pos;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,cas=0;
    cin>>t;
    while(t--){
        printf("Case %d:\n",++cas);
        int flag=0;
        while(cin>>s){
          if(s=="QUIT")break;
          else if(s=="VISIT"){
            cin>>s2;
            cout<<s2<<endl;
            if(Curr.size()==0)Curr.push(s2);
            else{
                s1=Curr.top();Curr.pop();
                Curr.push(s2);
                Back.push(s1);
            }
            if(flag==0){
                s="http://www.lightoj.com/";
                Back.push(s);
                flag=1;
            }
            while(!Forward.empty())Forward.pop();
          }
          else if(s=="BACK"){
                if(Back.size()==0)cout<<"Ignored"<<endl;
                else{
                    s2=Back.top();
                    cout<<s2<<endl;
                    Back.pop();
                    if(Curr.size()==0)Curr.push(s2);
                    else{
                        s1=Curr.top();Curr.pop();
                        Curr.push(s2);
                        Forward.push(s1);
                    }
                }
          }
          else{
            if(Forward.size()==0)cout<<"Ignored"<<endl;
            else{
                s2=Forward.top();
                cout<<s2<<endl;
                Forward.pop();
                if(Curr.size()==0)Curr.push(s2);
                else{
                    s1=Curr.top();Curr.pop();
                    Curr.push(s2);
                    Back.push(s1);
                }
            }
          }
        }
        while(!Forward.empty())Forward.pop();
        while(!Back.empty())Back.pop();
        while(!Curr.empty())Curr.pop();
    }
}
