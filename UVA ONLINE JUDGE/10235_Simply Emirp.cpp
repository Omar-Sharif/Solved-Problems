#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
            int n=atoi(s.c_str());
            int flag=1;
    int y=sqrt(n);
        for(int i=2;i<=y;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<n<<" is not prime."<<endl;
        if(flag==1){
            string s1=s;
            reverse(s.begin(),s.end());
            int m=atoi(s.c_str());
            int flag1=1;
            int x=sqrt(m);
            for(int j=2;j<=x;j++){
                if(m%j==0){
                    flag1=0;
                    break;
                }
            }
            if(flag1==1&&m>9&&s1!=s)
                cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }
    }
    return 0;
}
