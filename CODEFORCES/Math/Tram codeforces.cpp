#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int enter,exit,total1=0,total=0,total2=0;
        for(int i=0;i<n-1;i++){
            cin>>exit>>enter;
            if(i>0){
            total=total1+enter-exit;
            if(total>=total2)
                total2=total;
                total1=total;
            }
            else{
                total1=enter-exit;
                total2=total1;
            }
        }
        cin>>exit>>enter;
        cout<<total2<<endl;
    }
    return 0;
}
