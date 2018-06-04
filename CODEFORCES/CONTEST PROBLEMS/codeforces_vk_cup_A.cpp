#include<bits/stdc++.h>
using namespace std;
int ara[100];
int main()
{
    int n;
    while(cin>>n)
    {
        int ans=0;

        for(int i=1;i<=n;i++){
            cin>>ara[i];
        }

        int value=0;

        for(int i=1;i<=n;i++){
            if(ara[i]-value>15){
                break;
            }
            else{
                value=ara[i];
            }
        }
        value+=15;

        if(value>=90)value=90;

        cout<<value<<endl;
    }
}
