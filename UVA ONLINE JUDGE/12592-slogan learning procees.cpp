#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int i,j,k,n,q;

    cin>>n;
    string slogan[2*n],lslogan,m;
    getline(cin,m);
    for(i=0;i<2*n;i++)
        getline(cin,slogan[i]);
    cin >>q;
    getline(cin,m);
    for(i=0;i<q;i++)
    {
        getline(cin,lslogan);
        for(j=0;j<2*n;j++)
        {
            if(slogan[j]==lslogan){
               cout <<slogan[j+1]<<'\n';
            }
        }
    }
    return 0;
}
