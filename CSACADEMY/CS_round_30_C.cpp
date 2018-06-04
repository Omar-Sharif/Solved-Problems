#include<bits/stdc++.h>
using namespace std;

double ara[100010];

int main()
{
    int n,q,x,y;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>ara[i];

    double s=0,z;
    while(q--){
        scanf("%d",&x);
        if(x==0){
            scanf("%d %lf",&y,&z);
            ara[y]+=z+(z/double(n-1));
            s+=z/double(n-1);
        }
        else{
            scanf("%d",&y);
            printf("%.10lf\n",(ara[y]-s));
        }
    }
}
