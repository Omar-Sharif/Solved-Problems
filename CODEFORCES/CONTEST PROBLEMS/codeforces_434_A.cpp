#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

lli check(lli n,lli k)
{
    int count=0;
    while((n%10)==0){
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    lli c,cc=0,n,k,i=1,l;
    cin>>n>>k;

    while(i<1000000){
        l=n*i;
        c=check(l,k);
        if(c>=k)break;
        i++;
    }
    if(c>=k)
        cout<<l<<endl;
    else{
        for(lli i=1;i<=k;i++){
            n*=10;
        }
        cout<<n<<endl;
    }
}
