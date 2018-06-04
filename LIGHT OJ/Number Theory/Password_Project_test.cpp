#include<bits/stdc++.h>
using namespace std;

#define mxx 1e200
#define ld long double
string dictionary[20010],user[100];
string str,fs,ls,bd,password;
map<int,int>len;
int ds=0,us=0;
long double dp[50];

void pre_work()  /// Initialization Work
{
    ifstream file("input.txt");
    getline(file,str,'0');
    string s;
    for(int i=0;i<str.size();i++){
        if(str[i]=='\n'){
            int l=s.size();
            len[l]++;
            if(s.size()<4){
                s.clear();
                continue;
            }
            dictionary[ds++]=s;
            s.clear();
        }
        else s+=str[i];
    }

    ifstream fil("user_info.txt");
    getline(fil,str,'*');
    for(int i=0;i<str.size();i++){
        if(str[i]=='\n'){
            user[us++]=s;
            s.clear();
        }
        else s+=str[i];
    }

    sort(user,user+us);
    sort(dictionary,dictionary+ds);
}

int calc_base() /// Calculation of base of password
{
    int flag0=0,flag1=0,flag2=0,flag3=0,base=0;

    for(int i=0;i<password.size();i++){
        if(password[i]>='a' and password[i]<='z' and flag0==0){
            base+=26;
            flag0=1;
        }
        else if(password[i]>='A' and password[i]<='Z' and flag1==0){
            base+=26;
            flag1=1;
        }
        else if(password[i]>='0' and password[i]<='9' and flag2==0){
            base+=10;
            flag2=1;
        }
        else if(flag3==0 and !(password[i]>='a' and password[i]<='z') and !(password[i]>='A' and password[i]<='Z') and !(password[i]>='0' and password[i]<='9')){
            base+=20;
            flag3=1;
        }
    }
    return base;
}

/// Check a substring of password found in user information

bool check_user(string s)
{
    int l=0,h=us-1,ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(user[mid]==s) return 1;
        else if(user[mid]>s)h=mid-1;
        else l=mid+1;
    }
    return 0;
}

/// Check a substring of password found in predefined dictionary
bool find_diction(string s)
{
    int l=0,h=ds-1,ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(dictionary[mid]==s) return 1;
        else if(dictionary[mid]>s)h=mid-1;
        else l=mid+1;
    }
    return 0;
}

/// Calculating complexity
ld big_power(ld a,int b)
{
    if(b==0)return 1.0;
    if(b%2==0){
        ld x=(big_power(a,b/2));
        return x*x;
    }
    return a*big_power(a,b-1);
}

int main()
{
    pre_work();
    while(1){
        cout<<"Password :   ";cin>>password;cout<<endl;
        for(int i=0;i<50;i++)dp[i]=mxx;
        double base=calc_base();
        password="*"+password;
        int l=password.size();
        dp[0]=1.0;

        for(int i=1;i<l;i++){
            for(int j=i;j>=1;j--){
                string c=password.substr(j,i-j+1);
                if(check_user(c)){
                    dp[i]=min(dp[i],dp[j-1]);
                }
                else if(find_diction(c)){
                    dp[i]=min(dp[i],dp[j-1]*len[i-j+1]);
                }
                else{
                    int count=1;
                    for(int k=1;k<c.size();k++){
                        if(c[k]==c[k-1])continue;
                        count++;
                    }
                    dp[i]=min(dp[i],dp[j-1]*big_power(base,count));
                }
            }
        }

        ld second=dp[l-1]/228600000.0;

        if(dp[l-1]<20010.0){
            cout<<"A powerful computer will Instantly hack your password\n"; continue;
        }
        cout<<"A powerful computer will take about ";
        long double year;
        int month,week,day,hour,minute;
        year=floor(second/31536000.0);
        second-=(year*31536000.0);
        month=(second/2592000.0);
        second-=(month*2592000.0);
        week=(second/604800.0);
        second-=(week*604800.0);
        day=(second/86400.0);
        second-=(day*86400.0);
        hour=(second/3600.0);
        second-=(hour*3600.0);
        minute=(second/60.0);
        second-=(minute*60.0);
        if(year>0)cout<<year<<" year(s) ";
        if(month>0)cout<<month<<" month(s) ";
        if(week>0)cout<<week<<" week(s) ";
        if(day>0)cout<<day<<" day(s) ";
        if(hour>0)cout<<hour<<" hour(s) ";
        if(minute>0)cout<<minute<<" minute(s) ";
        if(second>0)cout<<second<<" second(s)";
        puts(" to hack your password");
    }
}
