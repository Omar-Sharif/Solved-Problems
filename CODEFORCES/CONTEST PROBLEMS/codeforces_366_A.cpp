#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            if(i%2==1){
                cout<<"I hate ";
            }
            else cout<<"I love ";

            if(i==n)cout<<"it"<<endl;
            else cout<<"that ";
        }
    }
}
