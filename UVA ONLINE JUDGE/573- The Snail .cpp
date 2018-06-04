#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,sum,f;
    int d;
    double p,m,n;

    while(cin>>h>>u>>d>>f){
        if(h==0)
            break;
        p=(u*f)/100;
        int i=1;
        int flag=0;
        sum=u;
        m=0;
        while(true)
        {
            if(i>1){
                m=u-(p*(i-1));
            }
            if(m>0)
                sum+=m;
            if(sum>h){
                flag=2;
                break;
            }
            sum-=d;
            if(sum<0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1){
                printf("failure on day %d\n",i);
        }
        else if(flag==2){
            printf("success on day %d\n",i);
        }
    }
    return 0;
}
