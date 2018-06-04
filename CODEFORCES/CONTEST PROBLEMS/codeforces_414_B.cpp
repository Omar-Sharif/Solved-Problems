#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
vector<double> v;
int main()
{
    double n,h;
    cin>>n>>h;

    double low=0,ba,high=h,area=h/(2*n),mid,base=1,hei=h,ara;

    for(int i=0;i<n-1;i++){
        double ans,bb;
        for(int j=0;j<100;j++){
            mid=(low+high)/2;
            ba=((mid)/hei)*base;
            ara=0.5*ba*mid;
            if(((0.5*hei*base)-ara)>=area){
                    low=mid;
                    ans=mid;
                    bb=ba;
            }
            else high=mid;
        }
        v.push_back(ans);
        hei=ans;base=bb;
        low=0,high=hei;
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        printf("%.09lf ",v[i]);
    }
}

