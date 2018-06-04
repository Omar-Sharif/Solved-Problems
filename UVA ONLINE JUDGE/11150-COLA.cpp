#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;

    while(cin>>p){
        int sum=p;
        while(p>1){
            sum+=p/3;
            p=p/3+p%3;
            if(p==2)
                p++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
