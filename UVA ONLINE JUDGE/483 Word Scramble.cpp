#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
            int x=s.length();
            int j=0,k=0;
        for(int i=0;i<x;i++){
                if(s[i]==' '){
                    for(int j=i-1;j>=k;j--)
                        cout<<s[j];
                        k=i+1;
                        cout<<' ';
                }
                else if(i==x-1){
                    for(int j=i;j>=k;j--)
                        cout<<s[j];
                        k=i+1;
                        cout<<endl;;
                }
        }
        //cout<<endl;
    }
    return 0;
}
