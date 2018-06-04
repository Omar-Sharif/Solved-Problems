#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,p,q;
    while(cin>>n>>p>>q){
        cin>>s;
        int i,j,k,l,y,flag=0;

        for(i=0;i<=n/p;i++){
            y=(n-(p*i))/q;
            if(p*i+q*y==n){
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout<<i+y<<endl;

            for(int j=0;j<i*p;j+=p){
                for(int k=j;k<j+p;k++)
                    cout<<s[k];
                cout<<endl;
            }
             for(int j=i*p;j<n;j+=q){
                for(int k=j;k<j+q;k++)
                    cout<<s[k];
                cout<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
