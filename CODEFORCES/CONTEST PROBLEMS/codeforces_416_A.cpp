#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=1;;i++){
        if(i%2==1){
            if(a>=i)a-=i;
            else{
                cout<<"Vladik"<<endl;
                break;
            }
        }
        else{
            if(b>=i)b-=i;
            else{
                cout<<"Valera"<<endl;
                 break;
            }
        }
    }
}
