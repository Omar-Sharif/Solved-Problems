#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int ara1[100010];
int main()
{
    int n,k;
   cin>>n>>k;

   for(int i=0;i<n;i++)
    cin>>ara[i];

   if(k>=n)
    cout<<ara[n-1]<<endl;
   else{
        int j=0;
        int m=n-k;
        for(int i=2*m;i<n;i++){
            ara1[j]=ara[i];
            j++;
        }
        m=2*m;

        for(int i=0;i<m;i++){
            m--;
            if(i<=m){
                ara1[j]=ara[i]+ara[m];
                j++;
            }
        }
        sort(ara1,ara1+j);
        cout<<ara1[j-1]<<endl;
   }

}

