#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i=s[0]-'0';
        int j=s[1]-'0';
        int c,d;
           if(i==1)
                c=7;
            else if(i==2||i==9||i==6||i==0)
                c=2;
            else if(i==3||i==4)
                c=3;
            else if(i==5)
                c=4;
            else if(i==7)
                c=5;
            else if(i==8)
                c=1;
            if(j==1)
                d=7;
            else if(j==2||j==9||j==6||j==0)
                d=2;
            else if(j==3||j==4)
                d=3;
            else if(j==5)
                d=4;
            else if(j==7)
                d=5;
            else if(j==8)
                d=1;

        cout<<c*d<<endl;
        }
        return 0;
    }
