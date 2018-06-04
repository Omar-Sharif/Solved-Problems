#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count1=0,count=0,j;
    for(int i=0;i<n;i++){
        cin>>j;
        if(j==100)
            count++;
        else
            count1++;
    }
    if((count1%2==0&&count%2==0)||(count%2==0&&count1%2!=0&&count>0))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
