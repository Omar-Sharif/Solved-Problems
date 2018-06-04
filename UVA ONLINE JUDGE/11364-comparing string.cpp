#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int result=ara[n-1]-ara[0];
        cout<<result*2<<endl;
    }
    return 0;
}
