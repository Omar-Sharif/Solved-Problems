#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int main()
{
    int n,count=0,value=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]!=-1){
            count+=ara[i];
        }
        else{
            if(count!=0)
                count--;
            else
                value+=1;
        }
    }
    cout<<value<<endl;
}
