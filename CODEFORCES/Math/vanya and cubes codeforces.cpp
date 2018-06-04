#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int i,j=0,k,count=0;
        k=1;
        int l=0;
        for(i=1;k<=n;i++){
            k=i+j;
             l=l+k;
            if(l<=n)
                count++;
            j=k;
        }
        cout<<count<<endl;
    }
    return 0;
}
