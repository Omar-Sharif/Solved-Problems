#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int mx,mi;

        if(n%7==0){
            mi=(n/7)*2;
        }
        else{
            mi=(n/7)*2;
            int s=n%7;
            if(s>5)mi+=1;
        }

        if(n%7==0){
            mx=(n/7)*2;
        }
        else{
            mx=(n/7)*2;
            int s=n%7;
            if(s>=2)mx+=2;
            else mx+=1;
        }

        cout<<mi<<' '<<mx<<endl;
    }
}
