#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,count=0;
    cin>>a>>b>>c;
    while(true){
        a-=1;b-=2;c-=4;
        if(a<0 or b<0 or c<0)break;
        count+=7;
    }
    cout<<count<<endl;

}
