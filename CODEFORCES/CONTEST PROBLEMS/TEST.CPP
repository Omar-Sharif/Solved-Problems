
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define per(i , j , n) for(ll i = j ; i > n ; i--)
#define mod 1000000007
#define INT_SIZE 32

int main()
{
    SPEED;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
        if(s[0]=='0')
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    else
    {

        if(s[0]=='0' && s[1]=='0')
            cout<<"No"<<endl;
        else if(s[n-1]=='0'&&s[n-2]=='0')
            cout<<"No"<<endl;
        else
        {
            ll r1=0,r2=0,c1=0,c2=0;
            rep(i,0,n)
                {
                    cout<<r1<<' '<<c1<<' '<<r2<<' '<<c2<<endl;
                    if(s[i]=='1')
                        c1=0;
                    else{
                        c1++;
                        r1=max(r1,c1);
                    }
                    if(s[i]=='0')
                        c2=0;
                    else{
                        c2++;
                    r2=max(r2,c2);}

                }
            cout<<r1<<" "<<r2<<endl;
            if(r1>=3 || r2>=2)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
