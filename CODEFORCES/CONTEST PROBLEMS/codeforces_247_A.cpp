#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count1=0,count2=0,count3=0,count4=0;
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            count1++;
        else if(s[i]=='2')
            count2++;
        else if(s[i]=='3')
            count3++;
        else
            count4++;
    }
    cout<<a*count1+b*count2+c*count3+d*count4<<endl;
}
