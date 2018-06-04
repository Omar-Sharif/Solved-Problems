#include<bits/stdc++.h>
using namespace std;

int ara[30],n,c=1;

int check()
{
    int count=2,d;
    while(1)
    {
        d=(count*(count-1))/2;
        if(d>=n)break;
        count++;
    }
    if(d>n){
        count--;
        n-=(count*(count-1))/2;
    }
    else n=0;
    ara[c]=count;
    //cout<<"Final "<<count<<' '<<c<<endl;

}
int main()
{
    string s;
    cin>>n;
    ara[1]=1;
    while(n>0){
        check();
        c++;
    }
    char ch='a';
    for(int i=1;i<=26;i++){
        for(int j=1;j<=ara[i];j++){
            s+=ch;
        }
        ch++;
    }
    cout<<s<<endl;
}
