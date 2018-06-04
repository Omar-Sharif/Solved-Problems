#include<bits/stdc++.h>
using namespace std;
int main()
{
    string doubles[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    while(cin>>n){
        int i,j,m=0;
        for(i=1,j=5;;i=i*2,j=j*2){
            m+=j;
            if(m>n){
                m=m-j;
                break;
            }
        }
        //cout<<m<<' '<<i<<endl;
        int p=n-m;
        int x;
        if(p%i==0){
            if(n==m) x=4;
            else x=-1;
        }
        else x=0;
        int a=(p)/(i)+x;
        cout<<doubles[a]<<endl;
    }
}
