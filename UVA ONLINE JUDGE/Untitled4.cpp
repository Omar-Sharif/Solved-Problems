#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i=0;
    while(getline(cin,s)){
        int x=s.length();
            int m=0;
            for(int i=0;i<=x;i++){
                if(s[i]==' '||i==x){
                    for(int j=i-1;j>=m;j--)
                    cout<<s[j];
                    m=i;
                }
            }
            cout<<endl;
    }
}

