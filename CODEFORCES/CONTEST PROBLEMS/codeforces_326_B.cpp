#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

int main()
{
    long long n,x,y,i,j;
    while(cin>>n)
    {
        for(i=1;i<=sqrt(n);i++){
            if(n%i==0){
                   // cout<<i<<' '<<n/i<<endl;
                v.push_back(i);
                v.push_back(n/i);
            }
        }

        sort(v.begin(),v.end());
        int flag;
        for(int i=v.size()-1;i>=0;i--){
            x=v[i];
            flag=0;
            for(j=2;(j*j)<=x;j++){
                if(x%(j*j)==0){
                    flag=1;
                    break;
                }
            }
           // cout<<x<<' '<<flag<<endl;
            if(flag==0){
                cout<<x<<endl;
                break;
            }
        }
        v.clear();
    }
}

