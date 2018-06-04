#include <iostream>

using namespace std;

int main()
{
    string s1;
    int i,j,n;
    while(getline(cin,s1)){
        for(i=0;s1[i]!='\0';i++){
            if(s1[i]=='1')
                cout << 1;
            else if(s1[i]=='0')
                    cout<<0;
            else if (s1[i]=='-')
                cout <<'-';
           else if(s1[i]=='A'||s1[i]=='B'||s1[i]=='C')
                cout << 2;
           else if(s1[i]=='D'||s1[i]=='E'||s1[i]=='F')
                cout << 3;
           else if(s1[i]=='G'||s1[i]=='H'||s1[i]=='I')
                cout << 4;
           else if(s1[i]=='J'||s1[i]=='K'||s1[i]=='L')
                cout << 5;
           else if(s1[i]=='M'||s1[i]=='N'||s1[i]=='O')
                cout << 6;
           else if(s1[i]=='P'||s1[i]=='Q'||s1[i]=='R'||s1[i]=='S')
                cout << 7;
           else if(s1[i]=='T'||s1[i]=='U'||s1[i]=='V')
                cout << 8;
           else if(s1[i]=='W'||s1[i]=='X'||s1[i]=='Y'||s1[i]=='Z')
                cout << 9;
        }
        cout <<endl;
    }
    return 0;
}
