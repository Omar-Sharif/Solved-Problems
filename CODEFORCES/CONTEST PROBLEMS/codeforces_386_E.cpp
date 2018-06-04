#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 200010

map<lli,int>my,my1;
lli ara[mx],ara1[mx],n,m,odd,even,o=1,e=2,a;

lli check_odd()
{
    lli value=-1;
    while(o<=m){
        if(my[o]!=1 and my1[o]!=1){
            value=o;
            my[o]=1;
            break;
        }
        o+=2;
    }
    return value;
}

lli check_even()
{
    lli value=-1;
    while(e<=m){
        if(my[e]!=1 and my1[e]!=1)
        {
            value=e;
            my[e]=1;
            break;
        }
        e+=2;
    }
    return value;
}

lli remove_duplicate()
{
    for(int i=0;i<n;i++){
        if(my[ara[i]]==0)my[ara[i]]=1;
        else{
            if(ara[i]%2==0 and even<=odd){
                a=check_even();
                if(a!=-1) ara[i]=a;
                else{
                    cout<<-1<<endl;return 0;
                }
            }
            else if(ara[i]%2==0 and even>odd){
                a=check_odd();
                if(a!=-1)ara[i]=a;
                else{
                    cout<<-1<<endl;return 0;
                }
                even--; odd++;
            }
            else if(ara[i]%2==1 and odd<=even){
                a=check_odd();
                if(a!=-1)ara[i]=a;
                else{
                    cout<<-1<<endl;return 0;
                }
            }
            else if(ara[i]%2==1 and odd>even){
                a=check_even();
                if(a!=-1)ara[i]=a;
                else{
                    cout<<-1<<endl;return 0;
                }
                odd--; even++;
            }
        }
    }
    return 1;
}

int make_equal()
{
    if(even>odd){
       for(int i=0;i<n;i++){
            if(ara[i]%2==0){
               a=check_odd();
               if(a!=-1)ara[i]=a;
               else{
                    cout<<-1<<endl;return 0;
               }
               even--;odd++;
            }
            if(even==odd)break;
       }
    }
    else if(odd>even){
        for(int i=0;i<n;i++){
            if(ara[i]%2==1){
               a=check_even();
               if(a!=-1)ara[i]=a;
               else{
                    cout<<-1<<endl;return 0;
               }
               even++;odd--;
            }
            if(even==odd)break;
       }
    }
    return 1;
}

int final_check()
{
    if(even!=odd){
        cout<<-1<<endl;return 0;
    }
    int count =0;
    for(int i=0;i<n;i++)
        if(ara[i]!=ara1[i]) count++;

    cout<<count<<endl;
    for(int i=0;i<n;i++)cout<<ara[i]<<' ';
}

int main()
{
    lli a,b,c,d;
    while(cin>>n>>m){
        for(int i=0;i<n;i++){
            scanf("%lld",&ara[i]);
            ara1[i]=ara[i];
            my1[ara[i]]=1;
            if(ara[i]%2==0)even++;
            else odd++;
        }

        if(n%2==1){
            cout<<-1<<endl;return 0;
        }

        if(remove_duplicate()==0)return 0;
        if(make_equal()==0)return 0;
        final_check();
    }
}

