#include<bits/stdc++.h>
using namespace std;

string s[100010];
map<char,int>my,my1;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        my[s[i][0]]++;
    }

    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<s[i].size();j++){
            my1[s[i][j]]++;
            if(j==0)my1[s[i][j]]++;
        }
        int flag=0;
        for(char i='a';i<='z';i++){
               // cout<<i<<' '<<my1[i]<<' '<<my[i]<<endl;
            if(my1[i]>my[i]){
                flag=1;
                break;
            }
        }
        if(flag==0)count++;
        my1.clear();
    }
    cout<<count<<endl;


}
