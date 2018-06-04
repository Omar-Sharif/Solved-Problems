#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  while(cin>>n){
    vector<int>v;

    int count=1;
    while(n>0){
        if(n%2==0){
            n/=2;
            count++;
        }
        else{
            v.push_back(count);
            n/=2;
            count++;
        }
       // cout<<n<<endl;
    }
    for(int i=v.size()-1;i>=0;i--){
        if(i==0)
            cout<<v[i]<<endl;
        else cout<<v[i]<<' ';
    }
    v.clear();
  }
}
