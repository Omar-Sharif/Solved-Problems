#include<bits/stdc++.h>
using namespace std;

int ara[10010];

int main()
{
    int n,odd=0,even=0,a;
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++){
        scanf("%d",&a);
        if(a==0){
            if(i%2==0)even++;
            else odd++;
        }
    }
    cout<<min(n-odd,n-even)<<endl;

}
