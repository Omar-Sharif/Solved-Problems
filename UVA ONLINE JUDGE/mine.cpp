#include <iostream>
using namespace std;

int main()
{
 int m,n,i,j,k=1,c=0;
 while(1){
    cin >> m>>n;
    if(m==0 && n==0)
    break;
    c++;
    if(c>1) cout<<endl;
 char mine [m][n];
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        cin >> mine[i][j];
 }
 cout << "Field #"<<k <<":"<<endl;
 for(i=0;i<m;i++){
        int c=0;
    for(j=0;j<n;j++){
            int c=0;
       if(mine[i][j]=='*')
        cout <<mine[i][j];
       else if(mine[i][j]=='.'){
        if(mine[i-1][j]=='*'&&i!=0)
            c=c+1;
        if(mine[i+1][j]=='*'&&i!=m-1)
            c=c+1;
        if(mine[i][j-1]=='*'&&j!=0)
            c=c+1;
        if(mine[i][j+1]=='*'&&j!=n-1)
            c=c+1;
        if(mine[i-1][j-1]=='*'&&i!=0&&j!=0)
            c=c+1;
        if(mine[i+1][j+1]=='*'&&i!=m-1&&j!=n-1)
            c=c+1;
        if(mine[i+1][j-1]=='*'&&i!=m-1 &&j!=0)
            c=c+1;
        if(mine[i-1][j+1]=='*'&&i!=0 &&j!=n-1)
            c=c+1;
            cout << c;
       }
 }
 cout<<endl;
}
k=k+1;
 }
 return 0;
}
