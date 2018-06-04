#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int a=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        int i;
        for(i=a+1;;i++){
            int m=i/1000;
            int n=i/100-10*m;
            int o=i/10-10*n-100*m;
            int p=i-10*o-100*n-1000*m;
            if(m!=n&&m!=o&&m!=p&&n!=o&&n!=p&&o!=p){
                break;
            }
        }
            cout<<i<<endl;
    }
    return 0;
}


