#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int pos=1,dis=0;
    while(n>1){
            //cout<<pos<<endl;
        if(pos==1){
            dis+=min(a,b);
            if(a<b)pos=2;
            else pos=3;
        }
        else if(pos==2){
            dis+=min(a,c);
            if(a<c)pos=1;
            else pos=3;
        }
        else if(pos==3){
            dis+=min(b,c);
            if(b<c)pos=1;
            else pos=2;
        }
        n--;
    }
    cout<<dis<<endl;

}
