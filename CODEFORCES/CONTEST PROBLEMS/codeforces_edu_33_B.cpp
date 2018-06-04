#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int powr(int a,int b)
{
    int c=1;
    for(int i=1;i<=b;i++)c*=a;
    return c;
}
void check()
{
    v.push_back(1);

    int a=2,b=1,sum=0;;
    while(1){
        for(int i=b;i<=a;i++){
            sum+=powr(2,i);
        }
        if(sum>100000)break;
        v.push_back(sum);
        sum=0;
        a+=2;b++;
    }
}
int main()
{
   check();
   int n;
   cin>>n;
   for(int i=v.size()-1;i>=0;i--){
        if(n%v[i]==0){
            cout<<v[i]<<endl;
            break;
        }
   }
}
