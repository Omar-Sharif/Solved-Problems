#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
lli ara[mx],my[mx],n;

lli bi(lli v)
{
    lli low=0,high=n,mid,ans;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ara[mid]==v){
            ans=mid;
            break;
        }
        else if(ara[mid]>v)high=mid-1;
        else low=mid+1;
    }
    return ans;
}
int main()
{
    lli a;
    while(cin>>n>>a)
    {
        lli m=0,sum=0,x;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            if(ara[i]==a)flag=1;
        }

        if(flag==0)
        {
            ara[n]=a;
            sort(ara,ara+n+1);
            lli p=bi(a);
           // cout<<p<<endl;
            lli s1=0,s2=0,s3=0,s4=0,c1=0,c2=0,c3=0,c4;

            s1=abs(ara[p]-ara[0]);
            s2=abs(ara[n]-ara[p]);
            c1=p;
            c2=n-p;
            if(c1==n){
                cout<<s1<<endl;
                continue;
            }
            else if(c2==n){
                cout<<s2<<endl;
                continue;
            }
            s3=abs(ara[p]-ara[1]);
            s4=abs(ara[n-1]-ara[p]);
          //  cout<<s1<<' '<<s2<<' '<<s3<<' '<<s4<<endl;
            c3=min(s3,s2)*2+max(s3,s2);
            c4=min(s4,s1)*2+max(s4,s1);
            cout<<min(c3,c4)<<endl;
        }
        else{
           sort(ara,ara+n);
            lli p=bi(a);
            lli s1=0,s2=0,s3=0,s4=0,c1=0,c2=0,c3=0,c4;

            s1=abs(ara[p]-ara[0]);
            s2=abs(ara[n-1]-ara[p]);
            c1=p;
            c2=n-p-1;
           // cout<<p<<' '<<c1<<' '<<c2<<endl;
            if(c1==n-1){
                cout<<s1<<endl;
                continue;
            }
            else if(c2==n-1){
                cout<<s2<<endl;
                continue;
            }
            s3=abs(ara[p]-ara[1]);
            s4=abs(ara[n-2]-ara[p]);
           // cout<<s1<<' '<<s2<<' '<<s3<<' '<<s4<<endl;
            c3=min(s3,s2)*2+max(s3,s2);
            c4=min(s4,s1)*2+max(s4,s1);
            cout<<min(c3,c4)<<endl;
        }

    }
}
