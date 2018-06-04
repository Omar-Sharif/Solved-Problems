#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,o=1;
    while(cin>>n&&n!=0){
        int ara[n];
        long long sum=0,count=0;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        sum=sum/n;
        for(int i=0;i<n;i++){
            if(ara[i]>sum){
                count+=ara[i]-sum;
            }
        }
        cout<<"Set #"<<o<<endl;
        cout<<"The minimum number of moves is "<<count<<'.'<<endl;
        cout<<endl;
        o++;
    }
}
