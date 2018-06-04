#include<bits/stdc++.h>
using namespace std;

string pat;
int lps[1000010];

void computePalin(int x)
{
    int l=x-1;
    for(int i=0;i<=l;){
            cout<<i<<' '<<l<<' '<<pat[i]<<' '<<pat[l]<<endl;
        if(pat[i]==pat[l]){
            i++;l--;
        }
        else{
            i++;
            l=x-1;
        }
    }
    cout<<l<<' '<<x-l<<endl;
}

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--){
        cin>>pat;
        int l=pat.size();
        computePalin(l);
    }
}
