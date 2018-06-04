#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,sum=0;
    cin>>n;
    if(n%2==1){
        cout<<n/2<<' '<<n/2+1<<endl;
    }
    else{
       for(int i=1;i<n/2;i++){
            sum=i;
            for(int j=i+1;j<n/2;j++){
                sum+=j;
                if(sum==n){
                    cout<<i<<' '<<j<<endl;
                    return 0;
                }
                if(sum>n)break;
            }
       }
       cout<<-1<<endl;
    }

}
