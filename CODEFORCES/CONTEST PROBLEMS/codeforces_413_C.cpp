#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<int,int>
#define mx 100010
vector<pii>vc,vd;
vector<int>savemx;
int n,c,d;

int check1(int l,int h,int value)
{
    int rr=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(vc[mid].first>value)h=mid-1;
        else{
            rr=max(rr,savemx[mid]);
            l=mid+1;
        }
    }
    return rr;
}

int check2(int l,int h,int value)
{
    int rr=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(vd[mid].first>value)h=mid-1;
        else{
            rr=max(rr,savemx[mid]);
            l=mid+1;
        }
    }
    return rr;
}

int main()
{
    cin>>n>>c>>d;
    int a,b,cc=0,dd=0;
    char ch;

    for(int i=0;i<n;i++){
        cin>>a>>b>>ch;
        if(ch=='C')vc.push_back(pii(b,a));
        else vd.push_back(pii(b,a));
    }

    sort(vc.begin(),vc.end());
    sort(vd.begin(),vd.end());
    for(int i=0;i<vc.size();i++){
        cc=max(cc,vc[i].second);
        savemx.push_back(cc);
    }

    int res=0,mx1=0,mx2=0;
    for(int i=vc.size()-1;i>=0;i--){
        if(vc[i].first>c)continue;
        int r1=vc[i].second;
        int bakic=c-vc[i].first;
        int zz=check1(0,i-1,bakic);
        if(zz!=0){
            r1+=zz;
            mx1=max(mx1,r1);
        }
    }

    savemx.clear();
    for(int i=0;i<vd.size();i++){
        dd=max(dd,vd[i].second);
        savemx.push_back(dd);
    }

    for(int i=vd.size()-1;i>=0;i--){
        if(vd[i].first>d)continue;
        int r1=vd[i].second;
        int bakid=d-vd[i].first;
        int zz=check2(0,i-1,bakid);
        if(zz!=0){
            r1+=zz;
            mx2=max(mx2,r1);
        }
    }
    mx1=max(mx1,mx2);

    int r1=0,r2=0;
    for(int i=0;i<vc.size() and vc[i].first<=c;i++)
        r1=max(r1,vc[i].second);
    for(int i=0;i<vd.size() and vd[i].first<=d;i++)
        r2=max(r2,vd[i].second);

    if(r1==0 or r2==0)r1=0;
    else r1+=r2;
    cout<<max(mx1,r1)<<endl;;
}
