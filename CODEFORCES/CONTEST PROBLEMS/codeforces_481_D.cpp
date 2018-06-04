#include<bits/stdc++.h>
using namespace std;

#define mx 100010
int ara[mx];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    if(n<3){
        cout<<0<<endl;
        return 0;
    }

    int mxx=100000000;
    int x=ara[n],y=ara[1];

    for(int i=0;i<3;i++){
        ara[1]=y;
        ara[1]+=(i-1);

        for(int j=0;j<3;j++){
             ara[n]+=(j-1);

            if((ara[n]-ara[1])%(n-1)==0){
                int dd=(ara[n]-ara[1])/(n-1);
                int count=0,flag=0;
                //cout<<dd<<' '<<ara[1]<<' '<<ara[n]<<endl;;
                for(int k=1;k<=n;k++){
                    int aa=ara[1]+(k-1)*dd;
                    int vv=abs(aa-ara[k]);

                    if(k==1)vv=abs(ara[1]-y);
                    if(k==n)vv=abs(ara[n]-x);

                    if(vv>1){
                        flag=1;
                        break;
                    }
                    else count+=abs(vv);
                }
                if(flag==0){
                    mxx=min(mxx,count);
                }
            }
            ara[n]=x;
        }
        ara[n]=x;
    }

    if(mxx==100000000)cout<<-1<<endl;
    else cout<<mxx<<endl;
}
