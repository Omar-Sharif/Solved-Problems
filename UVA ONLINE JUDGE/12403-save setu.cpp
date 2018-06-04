#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int count=0,n,m;
    string s,s1;
    cin>>n;
    for(int i=0;i<n;i++){
         cin>>s;
         if(s=="donate"){
            cin>>m;
            count=count+m;
         }
         if(s=="report")
            cout<<count<<endl;
    }
   return 0;
}
