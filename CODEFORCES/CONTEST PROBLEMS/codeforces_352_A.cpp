#include<bits/stdc++.h>
using namespace std;
map<int,char>my;
int main()
{
    int h=1;
    string s;
    for(int i=1;i<=1000;i++){
        int k=i;
        while(k>0){
            int m=k%10;
            k/=10;
            //cout<<k<<endl;
            s+=m+'0';
        }
       // cout<<s<<endl;
        reverse(s.begin(),s.end());
        for(int a=0;a<s.length();a++){
            my[h]=s[a];
            h++;
        }
        s.clear();
    }
   // for(int i=0;i<my.size();i++)cout<<my[i];
    int n;
    cin>>n;
    cout<<my[n]<<endl;

}
