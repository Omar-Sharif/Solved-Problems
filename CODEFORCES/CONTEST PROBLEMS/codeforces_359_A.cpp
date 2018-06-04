#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i,j,a,count=0;
    char c;
    while(cin>>n>>k){
            count=0;
        for(i=0;i<n;i++){
            cin>>c>>j;
            if(c=='+')k+=j;
            else{
                if(k>=j)k-=j;
                else count++;
            }
        }
        cout<<k<<' '<<count<<endl;
    }
}
