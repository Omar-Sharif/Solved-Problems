#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

map<int,int>my;

int main()
{
    int mxx=0,count=0,n,x;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        cin>>x;
        if(my[x]==1){
            count--;
        }
        else{
            my[x]=1;
            count++;
        }
        mxx=max(mxx,count);
    }
    cout<<mxx<<endl;
}
