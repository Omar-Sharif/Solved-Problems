#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int count=0,k;
        cin>>k;
        while(k>0){
            if(k%2==1)
                count++;
            k/=2;
        }
        if(count%2==0){
            printf("Case %d: even\n",i);
        }
        else printf("Case %d: odd\n",i);
    }
}
