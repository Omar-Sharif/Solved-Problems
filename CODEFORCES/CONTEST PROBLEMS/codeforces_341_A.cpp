#include<bits/stdc++.h>
using namespace std;
long long sum;
long long ara[100010];
vector<long long>v;
int main()
{
    long long x,y,min=100000000000;
    long long n;
    while(cin>>n){
        sum=0;
        int count=0;
        for(int i=0;i<n;i++){
           cin>>x;
            if(x%2!=0){
                count++;
                v.push_back(x);
            }
            sum+=x;
        }
        if(count%2==0)cout<<sum<<endl;
        else{
            sort(v.begin(),v.end());
            cout<<sum-v[0]<<endl;
        }
        v.clear();
    }

}
