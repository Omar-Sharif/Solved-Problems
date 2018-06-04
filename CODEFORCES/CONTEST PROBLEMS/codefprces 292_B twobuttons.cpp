#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m){
        int x=m;
        int count=0;
        for(int i=0;x>n;i++){
            if(x%2){
                x++;
                count++;
            }
        else{
            x/=2;
            count++;
        }
    }
    count+=n-x;
    cout<<count<<endl;
    }
    return 0;
}
