#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int length ,width,a,b,c=0;
    while(cin>>length>>width){
            c=0;
    while(1){
        c+=length/width;
        a=length%width;
         if(a==0)
        break;
        if(a<width){
            length=width;
            width=a;
       }
       else{
         length=a;
       }
    }
    cout<<c<<endl;
}

return 0;
}

