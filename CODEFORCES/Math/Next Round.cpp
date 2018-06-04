#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
        int score[n],c=0;
        for(int i=0;i<n;i++)
            cin>>score[i];
        int p=score[k-1];
        for(int i=0;i<n;i++){
            if(score[i]>=p && score[i]>0) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
