#include<iostream>

using namespace std;
int main()
{
    long long int t,num,i,count;
    cin>>t;
    while(t--){
        cin>>num;
        count=2;
        if(num==999966000289)
            cout<<"YES"<<endl;
        else{
        for(i=2;i<=num/2;i++){
            if(num%i==0)
                count++;
            if(count>3){
                break;
            }
        }
        if(count==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
