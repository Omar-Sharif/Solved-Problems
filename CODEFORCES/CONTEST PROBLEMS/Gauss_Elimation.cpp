#include<bits/stdc++.h>
using namespace std;

double ara[5][5];

int main()
{
    double a,b,x,y,z;
    cout<<"Enter argumented matrix\n"<<endl;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++)
            cin>>ara[i][j];
    }
    b=ara[2][1];a=ara[1][1];

    for(int j=1;j<=4;j++)
        ara[2][j]=ara[2][j]-(b*ara[1][j])/a;

    b=ara[3][1];
    for(int j=1;j<=4;j++)
        ara[3][j]=ara[3][j]-(b*ara[1][j])/a;

    b=ara[3][2];a=ara[2][2];
    for(int j=1;j<=4;j++)
        ara[3][j]=ara[3][j]-(b*ara[2][j])/a;

    cout<<"\nUpper Triangular Matrix"<<endl<<endl;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++)
           printf("%.2lf  ",ara[i][j]);
        cout<<endl;
    }
    z=ara[3][4]/ara[3][3];
    y=(ara[2][4]-ara[2][3]*z)/ara[2][2];
    x=(ara[1][4]-ara[1][3]*z-ara[1][2]*y)/ara[1][1];

    printf("\n\nRequire values :\n x=%.2lf\n y=%.2lf\n z=%.2lf\n",x,y,z);
}

/**input
3 1 -1 3
2 -8 1 -5
1 -2 9 8
**/
