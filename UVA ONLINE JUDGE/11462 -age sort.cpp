#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i,j,k,temp,n;

    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        int age[n];
        for(i=0;i<n;i++)
            cin>>age[i];

        sort(age,age+n);
        for(i=0;i<n;i++)
        {
             if(i==n-1)
                cout<<age[i];
            else
            cout<<age[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
