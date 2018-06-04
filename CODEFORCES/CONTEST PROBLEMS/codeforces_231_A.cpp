#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2,c3;
    string s;
    while(cin>>s)
    {
        int flag=0;
        c1=0,c2=0,c3=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+')flag=1;
            else if(s[i]=='=')flag=2;
            else if(flag==0)c1++;
            else if(flag==1)c2++;
            else c3++;
        }
        //cout<<c1<<' '<<c2<<' '<<c3<<endl;
        if(c1+c2==c3){cout<<s<<endl;return 0;}
        else if(abs(c1+c2-c3)!=2){cout<<"Impossible"<<endl;return 0;}
        else if(c3>c1+c2){c1++;c3--;}
        else if(c1+c2>c3){
                c3++;
            if(c1>c2)c1--;
            else c2--;
        }

        //cout<<c1<<' '<<c2<<' '<<c3<<endl;

        for(int i=0;i<c1;i++)cout<<'|';
        cout<<'+';
        for(int i=0;i<c2;i++)cout<<'|';
        cout<<'=';
        for(int i=0;i<c3;i++)cout<<'|';
        cout<<endl;
        s.clear();

    }
}
