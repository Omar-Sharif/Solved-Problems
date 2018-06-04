#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,p1,p2,p3,p4;
    char c;
    cin>>a>>c>>b;

    int count=0;

    while(1){
        p1=a/10;p2=a%10;p3=b/10;p4=b%10;
        //cout<<p1<<' '<<p2<<' '<<p3<<' '<<p4<<endl;
        if(p1==p4 and p2==p3)break;
        count++;
        b++;
        if(b==60)a++;
        b=b%60;
        a=a%24;
    }
    cout<<count<<endl;
}
