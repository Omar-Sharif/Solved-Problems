#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int count=1;
        string s,s1;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s!=s1&&i!=0)
                count++;
            s1=s;
        }
        cout<<count<<endl;
    }
    return 0;
}
