#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,m;
        cin>>s;
        cin>>n>>m;
        if(s=="r"||s=="Q")
           cout<<min(n,m)<<endl;
        else if(s=="K"){
            int sum=((n+1)/2)*((m+1)/2);
            cout<<sum<<endl;
        }
        else{
            cout<<(n*m+1)/2<<endl;
        }
    }
    return 0;
}
