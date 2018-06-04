#include<bits/stdc++.h>
using namespace std;
long long ara[10011];

long long a, b, c, d, e, f;
long long fn( long long n ) {
    if( n == 0 ) {
            ara[n]=a;
            return a;
    }
    if( n == 1 ) {
            ara[n]=b;
            return b;
    }
    if( n == 2 ) {
            ara[n]=c;
            return c;
    }
    if( n == 3 ) {
            ara[n]=d;
            return d;
    }
    if( n == 4 ) {
            ara[n]=e;
            return e;
    }
    if( n == 5 ) {
            ara[n]=f;
            return f;
    }

    if(ara[n]!=-1)return ara[n];
    else {
            ara[n]= (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
            return ara[n];
    }
}
int main() {
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        ara[n+1];
        memset(ara,-1,sizeof(ara));
        fn(n);
        printf("Case %lld: %lld\n", ++caseno, ara[n] % 10000007);
    }
    return 0;
}
