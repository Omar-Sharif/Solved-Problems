#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,b,c1,c2;
    while(cin>>n>>k>>a>>b){
        string s;
        c1=0,c2=0;
        while(n>0){
            if(a>=b and c1<k and a>0){
                s+='G';
                c1++;c2=0;a--;
            }
            else if(a>=b and c1==k and b>0){
                s+='B';
                c2++;c1=0;b--;
            }
            else if(b>=a and c2<k and b>0){
                s+='B';
                c2++;c1=0;b--;
            }
            else if(b>=a and c2==k and a>0){
                s+='G';
                c1++;c2=0;a--;
            }
            else break;
            n--;
        }
       // cout<<s<<' '<<n<<endl;
        if(n>0)cout<<"NO"<<endl;
        else cout<<s<<endl;
    }
}
