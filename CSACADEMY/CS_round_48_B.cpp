#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,mx=0,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x==0){
            sum+=y;
            mx=max(mx,sum);
        }
        else{
            if(y>=sum){
                mx=max(mx,y);
                sum=y-sum;
            }
            else sum-=y;
        }
    }
    cout<<mx<<endl;
}
