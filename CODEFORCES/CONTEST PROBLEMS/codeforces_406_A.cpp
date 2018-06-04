#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010];

int main()
{
    lli a,b,c,d;
    cin>>a>>b>>c>>d;

    int x=1000000;
    lli v=b;
    while(x--){
        if(v>=d){
            if((v-d)%c==0){
                cout<<v<<endl;
                return 0;
            }
        }
        v+=a;
    }
    cout<<-1<<endl;
}
