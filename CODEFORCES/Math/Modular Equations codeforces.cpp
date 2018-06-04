#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,m,count;
    while(cin>>a>>b){
        d=a-b;
        count=0;
        if(d==0)
            cout<<"infinity"<<endl;
            else{
                    m=1;
        for(int i=b+1;i<=d;i=i++){
            if(a%i==b){
                m=i;
                count++;
            }
            }
            cout<<count<<endl;
    }
}
}
