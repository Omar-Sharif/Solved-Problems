#include<iostream>
using namespace std;
int main()
{
    int n,m,q,i,flag;
    while(cin>>n>>m)
    {
        for(i=n+1;i<=m;i++){
                flag=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                 flag=0;
                 break;
                }
            }
            if(flag==1){
                    q=i;
                    break;
            }
        }
        if(m==q)
            cout<<"YES"<<endl;
        else
              cout<<"NO"<<endl;
    }
}
