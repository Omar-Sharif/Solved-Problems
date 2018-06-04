#include<bits/stdc++.h>
using namespace std;
struct player
{
    int attack;
    int deffence;
    string name;
};
bool compare(player a,player b)
{
    if(a.attack>b.attack)
        return true;
    else if(a.attack<b.attack)
        return false;
    else{
        if(a.deffence<b.deffence)
            return true;
        else if(a.deffence>b.deffence)
            return false;
        else{
            if(a.name<b.name)
                return true;
            else
                return false;
        }

    }
}
bool cmp(player a,player b)
{
    if(a.name<b.name)
        return true;
    else
        return false;
}
int main()
{
    player p[10];
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        for(int i=0;i<10;i++){
            cin>>p[i].name;
            cin>>p[i].attack>>p[i].deffence;
        }
        sort(p,p+10,compare);
        sort(p,p+5,cmp);
        sort(p+5,p+10,cmp);
        cout<<"Case "<<j<<':'<<endl;
        cout<<'(';
        for(int i=0;i<5;i++){
            if(i!=4)
            cout<<p[i].name<<", ";
            else
                cout<<p[i].name;
        }
        cout<<')'<<endl;
        cout<<'(';
        for(int i=5;i<10;i++){
             if(i!=9)
            cout<<p[i].name<<", ";
            else
                cout<<p[i].name;
        }
        cout<<')'<<endl;
    }
    return 0;
}
