#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n){
        cin>>s;
        int l=s.length(),count=0,count1=0;

        for(int i=0;i<l;i++){
            if(s[i]=='0')
                count++;
            else if(s[i]=='1')
                count1++;
        }
    cout<<abs(count-count1)<<endl;
    }

}
