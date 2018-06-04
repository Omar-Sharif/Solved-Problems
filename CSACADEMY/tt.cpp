#include<iostream>
using namespace std;

int main()
{
    int n,m,sum=0,x,flag;
    while(cin>>m){
        for(int i=0;i<m;i++){
            cin>>n;
            flag=0;sum=0;
            for(int j=0;j<n;j++){
                cin>>x;
                if(x>(n-1)*2)flag=1;
                sum+=x;
            }
            if(sum!=(n*(n-1)))flag=1;
            if(flag==0)cout<<"T"<<endl;
            else cout<<"F"<<endl;
        }
    }
}
