#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    int s[4];
    while(cin>>a>>b>>c>>d)
    {
        int i=0;
        s[i]=a;i++;
        s[i]=b;i++;
        s[i]=c;i++;
        s[i]=d;
        sort(s,s+4);
        i=0;
       if(s[i]+s[i+1]>s[i+2]||s[i+1]+s[i+2]>s[i+3])
            cout<<"TRIANGLE"<<endl;
       else if(s[i]+s[i+1]==s[i+2]||s[i+1]+s[i+2]==s[i+3])
            cout<<"SEGMENT"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}

