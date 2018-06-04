#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,n,r,avg,count,c,a,b;
    while(cin>>n>>r>>avg){
        count=0;
        for(i=1;i<n;i++){
            cin>>a;
            if(a<avg){
                c=avg-a;
                count=count+c;
            cin>>b;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
