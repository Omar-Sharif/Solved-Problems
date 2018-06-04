#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string m;
    while(cin>>m){
        if(m=="#") return 0;
        if(next_permutation(m.begin(),m.end()))
            cout<<m<<endl;
        else cout<<"No Successor"<<endl;
    }
}
