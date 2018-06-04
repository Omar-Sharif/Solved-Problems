#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x,y,e,f;

    while(cin>>a>>b>>c){

        int flag=0;

        if(c%a==0 or c%b==0){
            cout<<"Yes"<<endl;
        }
        else{
            for(int i=0;i<=20000;i++){
                x=c-(i*b);
                if(x>=0 and x%a==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}

