#include<bits/stdc++.h>
using namespace std;
int ara[200010];
int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    for(int i=0;i<n;i++)
        cin>>ara[i];

    int count=0,value=0;
    for(int i=0;i<n;i++){
        if(ara[i]<=t){
            count++;
        }
        else{
            if(count>=c){
                value+=count-c+1;
            }
            count=0;
        }
    }
    if(count>=c){
        value+=count-c+1;
    }
    cout<<value<<endl;
}
