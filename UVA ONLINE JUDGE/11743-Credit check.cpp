#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string ara,s;
    int sum_odd,sum_even,i,Test,a;
    cin>>Test;
    cin>>s;
    while(Test--)
    {
            getline(cin,ara);
            sum_odd=0;
            for(i=0;i<ara.length();i+=2){
                if(ara[i]!=' '){
                    cout<<a<<endl;
                    if(a!=0)
                    sum_odd+=(a%10)+1;
                    else sum_odd=0;
                    //cout<<sum_odd<<endl;
            }
            else continue;
            }
            //cout<<sum_odd<<endl;
            sum_even=0;
            for(i=1;i<ara.length()-1;i+=2)
                sum_even+=ara[i]-'0';
            //cout<<sum_even<<endl;
            if((sum_odd+sum_even)%10==0){
                cout<<"Valid"<<endl;
            }
            else{
                cout<<"Invalid"<<endl;
            }
    }
    return 0;
}
