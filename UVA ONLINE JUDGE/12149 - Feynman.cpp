#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n){
        int sum=0;
        if(n==0)
            break;
        else{
            for(int i=n;i>0;i--){
                sum+=i*i;
            }
        cout<<sum<<endl;
        }
    }
}
