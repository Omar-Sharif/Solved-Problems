#include<bits/stdc++.h>
using namespace std;
long high=2000000000;
long low=-2000000000;

int main()
{
    string s,s1;
    long n,m,flag=0;
    cin>>m;
    while(m--){
        cin>>s>>n>>s1;
        if(flag==0){
        if(s==">"){
            if(s1=="Y"&&low<n+1)
                low=n+1;
            else if(s1=="N"&&n<high)
                high=n;
        }
        else if(s=="<"){
            if(s1=="Y"&&high>n-1)
                high=n-1;
            else if(s1=="N"&&n>low)
                low=n;
        }
        else if(s==">="){
            if(s1=="Y"&&n>=low)
                low=n;
            else if (s1=="N"&&high>n)
                high=n-1;
        }
        else if(s=="<="){
            if(s1=="Y"&&n<=high)
                high=n;
            else if(s1=="N"&&n>low)
                low=n+1;
        }
        }

        if(high<low)
            flag=1;
       // cout<<low<<' '<<high<<endl;

    }
    if(flag==1)
        cout<<"Impossible"<<endl;
    else cout<<high<<endl;
}
