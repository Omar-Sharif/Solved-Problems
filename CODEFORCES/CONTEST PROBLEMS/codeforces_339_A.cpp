#include<bits/stdc++.h>
using namespace std;
#define uii unsigned long long
vector<uii>v;
uii l,r,k,x,y,sum;
int main()
{
    while(cin>>l>>r>>k){
            x=1;
            y=k;
            int l3=0;
         while(y>0){
            y/=10;
            l3++;
        }
        if(l==1)v.push_back(1);
        for(int i=0;;i++){
                int l1=0,l2=0;
                y=x;
                while(y>0){
                    y/=10;
                    l1++;
                }
                x*=k;
                y=x;
                while(y>0){
                    y/=10;
                    l2++;
                }
                //cout<<x<<endl;
                //cout<<l1<<' '<<l2<<endl;
                if(l2-l1<l3-1)break;
            //cout<<x<<endl;
             if(x>r)break;
            if(x>=l and x<=r){
                    //cout<<x<<endl;
                v.push_back(x);
            }
        }

        if(v.size()==0)cout<<-1<<endl;
        else{
                int d=v.size();
            for(int i=0;i<d;i++){
                if(i==d-1)cout<<v[i]<<endl;
                else cout<<v[i]<<' ';
            }
        }
        v.clear();
    }
}
