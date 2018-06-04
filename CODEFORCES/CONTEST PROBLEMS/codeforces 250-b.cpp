#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int m,x;
    cin>>s;
    cin>>m;
    int ara[m];
    for(int i=0;i<m;i++){
            cin>>x;
            ara[i]=x;
    }
    int l=s.length();
        for(int k=0;k<m;k++){
             int y=ara[k];
             reverse(s.begin()+y-1,s.begin()+(l-y+1));
        }

    cout<<s<<endl;

}
