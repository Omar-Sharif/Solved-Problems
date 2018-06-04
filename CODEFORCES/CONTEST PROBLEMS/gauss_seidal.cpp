#include<bits/stdc++.h>
using namespace std;

double ara[10][10];
int check1()
{
    int a,b,c;
    for(int i=1;i<=3;i++){
        if(abs(ara[i][1])>abs(ara[i][2])+abs(ara[i][3])){
            c=i;
            break;
        }
    }
    for(int j=1;j<=4;j++){
        swap(ara[c][j],ara[1][j]);
    }

    for(int i=2;i<=3;i++){
        if(abs(ara[i][2]>abs(ara[i][1])+abs(ara[i][3]))){
            b=i;
            break;
        }
    }
    for(int j=1;j<=4;j++){
        swap(ara[b][j],ara[2][j]);
    }
}
int main()
{
    cout<<"Enter the values "<<endl;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++)
            cin>>ara[i][j];
    }
    check1();

    cout<<endl;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++){
            cout<<ara[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    double x=0,y=0,z=0,x1,y1,z1,c=0;
    while(1){

        x1=(ara[1][4]-(ara[1][2]*y)-(ara[1][3]*z))/ara[1][1];
        y1=(ara[2][4]-(ara[2][1]*x1)-(ara[2][3]*z))/ara[2][2];
        z1=(ara[3][4]-(ara[3][1]*x1)-(ara[3][2]*y1))/ara[3][3];
    //    cout<<x1<<' '<<y1<<' '<<z1<<endl;
        if(abs(x-x1)<.0001 and c>0)
            break;
        c++;
        x=x1;y=y1;z=z1;
    }
    cout<<c<<endl;
    cout<<x1<<' '<<y1<<' '<<z1<<endl;
}

