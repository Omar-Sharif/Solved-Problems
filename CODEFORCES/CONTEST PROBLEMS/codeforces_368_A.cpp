#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int main()
{
    int n,m;
    char a;
    while(cin>>n>>m)
    {
        int flag=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a;
                if(a=='C' or a=='M' or a=='Y')flag=1;
            }
        }
        if(flag==1)cout<<"#Color"<<endl;
        else cout<<"#Black&White"<<endl;
    }
}
