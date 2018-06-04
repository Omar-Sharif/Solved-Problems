#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int count,n,i,j;
    while(cin>>n)
    {
        count=0,i=1,j=n;
        while(1){
            v.push_back(i);
            i++;
            count++;
            if(count>=n)break;
            v.push_back(j);
            j--;
            count++;
            if(count>=n)break;
        }

        for(i=0;i<v.size();i++){
            if(i==v.size()-1)cout<<v[i]<<endl;
            else cout<<v[i]<<' ';
        }
        v.clear();
    }
}
