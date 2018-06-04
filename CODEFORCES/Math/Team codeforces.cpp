#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int p,v,t,count=0;
        for(int i=0;i<n;i++){
            cin>>p>>v>>t;
            if((p==1&&v==1)||(p==1&&t==1)||(v==1&&t==1))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
