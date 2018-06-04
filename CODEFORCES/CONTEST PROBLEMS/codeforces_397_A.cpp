#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,x;
    while(cin>>n){
        cin>>a;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            cin>>x;
            string b,c;
            b+=x[0];b+=x[1];b+=x[2];
            if(b==a)c1++;
            c+=x[5];c+=x[6];c+=x[7];
            if(c==a)c2++;
            //cout<<a<<' '<<b<<' '<<c<<endl;
        }
        if(c1==c2)cout<<"home"<<endl;
        else cout<<"contest"<<endl;
    }
}
