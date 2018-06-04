#include<bits/stdc++.h>
using namespace std;

struct my
{
    int number,value;
}s[1010];
int func()
{
    for(int i=2;i<=1001;i++){
        s[i].value=i;
        int count=2;
        for(int j=2;j<=(i+1)/2;j++){
            if(i%j==0)
                count++;
        }
        s[i].number=count;
    }
    s[1].number=1;
    s[1].value=1;
}
int com()
{
    for(int i=1;i<=1000;i++){
        for(int j=i+1;j<=1000;j++){
            if(s[i].number>s[j].number){
                swap(s[i].number,s[j].number);
                swap(s[i].value,s[j].value);
            }
            else if(s[i].number==s[j].number&&s[j].value>s[i].value){
                swap(s[i].value,s[j].value);
            }
        }
    }

}
int main()
{
    int t,caseno=0,n;
    func();
    com();
    cin>>t;

    while(t--){
        cin>>n;
        printf("Case %d: %d\n",++caseno,s[n].value);
    }
}
