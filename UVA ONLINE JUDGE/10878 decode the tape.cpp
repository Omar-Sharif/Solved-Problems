using namespace std;
#include<iostream>
int main()
{
    string str;
    int val, pow, i;
    while(getline(cin,str))
    {
        if(str[0]=='_')
        {
            continue;
        }
        if(str[0]=='|')
        {
            val=0, pow =128, i = 1;
            while(str[i]!='|')
            {
                if(str[i]=='o' || str[i]=='O' )
                {
                    val += pow;
                }
                i++;
                if(str[i]==' ' || str[i]=='o' || str[i]=='O' )
                pow/=2;
            }
        }
        cout<< char(val);
    }
    return 0;
}
