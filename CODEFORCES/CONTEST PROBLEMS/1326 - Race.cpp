#include<bits/stdc++.h>

#define ll long long int

#define II ( { int a ; scanf("%d",&a) ; a; } )
#define LL ( { long long int a ; scanf("%lld",&a) ; a; } )
#define DD ({double a; scanf("%lf", &a); a;})

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define QI queue<int>
#define SI stack<int>
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()

#define sqr(x) ((x) * (x))
#define mem(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)

#define pi acos(-1.0)

#define forab(i, a, b)  for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n)       forab (i, 0, (n) - 1)
#define For(i, n)       forab (i, 1, n)
#define rofba(i, a, b)  for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n)       rofba (i, 0, (n) - 1)
#define rof(i, n)       rofba (i, 1, n)

using namespace std;

typedef vector<int> vi ;
typedef set<int> si;
typedef vector<ll>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<ll,ll>pll;
typedef pair<double,double>pdd;
typedef vector<pii> vpii;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction

/* **************************************  My code start here ****************************************** */
int md=10056;
ll nCr[1001][1001];
ll A[1001];
int main(){
    nCr[1][0]=1;
    nCr[1][1]=1;
    forab(i,2,1000){
        nCr[i][0]=1;
        forab(j,1,i-1){
            nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%md;
        }
        nCr[i][i]=1;
    }
    A[1]=1;
    forab(i,2,1000){
        ll ans=0;
        rof(j,i-1){
            ans=(ans+(nCr[i][i-j]*A[j])%md)%md;
        }
        A[i]=(ans+1)%md;
    }
    int t=II;
    For(c,t){
        int n=II;
        printf("Case %d: %lld\n",c,A[n]);
    }
}
