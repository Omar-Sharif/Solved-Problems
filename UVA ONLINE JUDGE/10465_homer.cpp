#include <iostream>
using namespace std;
int main()
{
    int m,n,t,i,j;
    while((cin>>m>>n>>t)){
            if(t%m==0){
                i=t/m;
                cout <<i<<endl;
            }
            else{
                j=t/m;
                cout <<(j-1)<<endl;
            }
    }
    return 0;
}
