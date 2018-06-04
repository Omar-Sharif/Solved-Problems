#include<bits/stdc++.h>
using namespace std;
char ara[110][110];

int main()
{
    int n,d;
    while(cin>>n>>d)
    {
        int count=0,mx=0;
        for(int i=0;i<d;i++){
            for(int j=0;j<n;j++)
                cin>>ara[i][j];
        }

        for(int i=0;i<d;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(ara[i][j]=='0'){
                    flag=1;
                    break;
                }
            }
            if(flag==1)count++;
            if(flag==0)count=0;
            mx=max(mx,count);

        }
        cout<<mx<<endl;
    }
}
