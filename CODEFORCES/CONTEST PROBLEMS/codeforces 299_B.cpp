#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    while(cin>>n>>x>>y){
        int ara[n],ara1[n];
        int a,b;
        for(int i=0,j=0;i<n;i++,j++){
            cin>>a>>b;
            ara[i]=a;
            ara1[j]=b;
        }
        double d;
        if(x==0||y==0)
            d=0;
        else
          d=double(x)/double(y);
        cout<<d<<endl;
        int count=0,flag=0,flag1=0,flag2=0;
        for(int i=0,j=0;i<n;i++,j++){
            if(abs(ara[i])==x&&(ara[i]<=100000)){
                    if(flag==0){
                        count++;
                    }
                ara[i]=100010;
                ara1[j]=100010;
                flag=1;
            }
            else if(abs(ara1[j])==y&&(ara[i]<=100000))
            {
                if(flag1==0){
                    count++;
                }
                 ara[i]=100010;
                ara1[j]=100010;
                flag1=1;
            }
        }
        for(int i=0,j=0;i<n;i++,j++){
            double z=ara[i]/ara1[j];
            cout<<z<<endl;
            if(z==d){
                if(flag2==0&&ara1[i]<=100000){
                    count++;
                }
                ara[i]=100010;
                ara1[j]=100010;
                flag2=1;
            }
        }
        for(int i=0;i<n;i++){
            if(ara[i]!=100010)
                count++;
        }
        cout<<count<<endl;
    }
}
