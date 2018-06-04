#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k,sum=0,x,v;
    cin>>n>>k;
    v=k-.50;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    int count=0;
    while(1){
        if((sum)/n>=v)break;
        sum+=k;
        n++;
        count++;
    }
    cout<<count<<endl;

}
