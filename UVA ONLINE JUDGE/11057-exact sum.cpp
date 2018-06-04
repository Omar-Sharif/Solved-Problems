#include <iostream>
using namespace std;
int main()
{
    long int n;
    while(cin>>n){
        long int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        long int m,d=2000000,b,c;
        cin>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((ara[i]+ara[j])==m&&i!=j){
                    if(ara[i]>ara[j]){
                        if((ara[i]-ara[j])<d){
                            b=ara[j];
                            c=ara[i];
                            d=ara[i]-ara[j];
                        }
                    }
                    else{
                        if((ara[j]-ara[i])<d){
                            b=ara[i];
                            c=ara[j];
                            d=ara[j]-ara[i];
                        }
                    }
                }
            }
            if(d==0)
                break;
        }
        cout<<"Peter should buy books whose prices are "<<b<<" and "<<c<<'.'<<endl<<endl;
    }
    return 0;
}
