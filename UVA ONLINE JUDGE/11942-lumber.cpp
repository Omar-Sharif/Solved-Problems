#include <iostream>
using namespace std;

int main()
{   int ara[10];
    int n,i,j,k,l;
    cin>>n;
    for(l=0;l<n;l++){
        for(i=0;i<10;i++){
            cin >> ara[i];
        }
        k=0;
        for(i=0;i<9;i++){
            if(ara[i]<ara[i+1])
                k=1;
            else{
                k=0;
                break;
            }
        }
        if(k!=1){
            j=0;
        for(i=0;i<9;i++){
            if(ara[i]>ara[i+1])
                j=1;
            else{
                j=0;
                break;
            }
        }
        }
        if(l==0)cout <<"Lumberjacks:"<<endl;
        if(k==1||j==1)cout <<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }
    return 0;
}
