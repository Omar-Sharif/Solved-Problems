#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;

    while(n>1){
        if(n==2){
            c+=1;
            break;
        }
        if(n%3==1){
            n-=1;
            c++;
        }
        else if(n%3==2){
            n+=1;
            c++;
        }
        c++;
        n/=3;
    }
    cout<<c<<endl;
}
