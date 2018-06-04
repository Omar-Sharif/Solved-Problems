#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int count=s.length();

        cout<<(count+1)*26-count<<endl;
    }
    return 0;
}
