#include<bits/stdc++.h>
using namespace std;
string s[110];
int mirror(int n)
{
    if(n==1)return n;
    int j=0;
    for(int i=1;i<=n/2;i++){
        if(s[i]!=s[n-j])
            return n;
        j++;
    }
    if(n%2!=0)return n;
    mirror(n/2);
}

int main()
{
    int n,m;
    char ch;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            cin>>ch;
            s[i]+=ch;
        }
    }

    if(n%2!=0){
        cout<<n<<endl;
    }
    else cout<<mirror(n)<<endl;
}
