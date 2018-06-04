#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n>>s){
        if(n==0)
            break;
        int x=s.length();
        int y=x/n;
        for(int i=0;i<x;i=i+y){
            for(int j=i+y-1;j>=i;j--)
                cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
