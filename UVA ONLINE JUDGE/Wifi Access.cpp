#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,n,y,cas=1,i;
    float m;
    cin>>T;
    while(T--){
        cin>>n>>y;
        cout<<"Case "<<cas++<<":\n";
        int yx[n],yy[n],r[n];
        int rx[y],ry[y];
        for(i=0;i<n;i++){
            cin>>yx[i]>>yy[i]>>r[i];
        }
        for(i=0;i<y;i++){
            cin>>rx[i]>>ry[i];
        }
        int flag;
        for(i=0;i<y;i++){
            flag=0;
            for(int j=0;j<n;j++){
                m=sqrt(pow((rx[i]-yx[j]),2)+pow((ry[i]-yy[j]),2));
                if(m<=r[j]){
                    flag=1;
                    continue;
                }
            }

            if(flag==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }

    }

}
