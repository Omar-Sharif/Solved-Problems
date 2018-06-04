#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    lli k,r,a,s;
    while(cin>>k>>r){
        int count=0;
        s=k;
        while(1){
            a=k%10;
            count++;
            if(a==0 or a==r)break;
            k=s*(count+1);
        }
        cout<<count<<endl;
    }
}
