#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int T,i,m;
    cin >>T;

    while(T--)
    {
        int sum=0;
        m=0;
        cin >>str;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='O')
                m++;
            else if(str[i]=='X')
                m=0;
            sum+=m;
        }
        cout <<sum<<endl;
    }
    return 0;
}
