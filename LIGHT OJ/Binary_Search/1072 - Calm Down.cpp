#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define eps 0.0000000001

int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        double R,n,A,r,a,b,c;
        cin>>R>>n;

        r=(sin(pi/n)*R)/(sin(pi/n)+1);
        printf("Case %d: %.10lf\n",++cas,r);

    }
}
