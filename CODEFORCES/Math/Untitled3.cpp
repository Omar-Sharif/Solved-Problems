#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int a=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        cout<<a<<endl;
        int flag=0,i;
        for(i=a+1;i<=9000;i++){
            int m=i/1000;
            int n=i/100-10;
            int o=i/10-100;
            int p=i-1000;
            if(m!=n&&m!=o&&m!=p&&n!=o&&n!=p&&o!=p){
                flag=1;
                break;
            }
            cout<<i<<endl;
        }
        if(flag==1)
            cout<<i<<endl;
    }
    return 0;
}

