#include<iostream>
using namespace std;
int main()
{
    int n,d,j,sum=0;;
    cin>>n>>d;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>j;
        sum+=j;
    }
    int sum1=sum+(n-1)*10;
    if(sum1<=d){
        int c=d-sum;
        int a=c/5;
        cout<<a<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}
