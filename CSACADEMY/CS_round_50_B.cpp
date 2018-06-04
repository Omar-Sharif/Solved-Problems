#include<bits/stdc++.h>
using namespace std;

int ara[20]={31,28,31,30,31,30,31,31,30,31,30,31};
string s[20]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
string day[370];
int main()
{
    string ss;
    cin>>ss;
    int t,c=0;
    for(int i=0;i<7;i++)if(s[i]==ss){
        t=i;
        break;
    }
    for(int i=1;i<=365;i++){
        day[i]=s[t];
        t=(t+1)%7;
    }
    t=13;
    for(int j=0;t<=365 and j<12;j++){
        //cout<<t<<' '<<day[t]<<endl;
        if(day[t]==s[4])c++;
        t=t+ara[j];
    }
    cout<<c<<endl;
}

