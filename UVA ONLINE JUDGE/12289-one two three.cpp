#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string c;
    int i,t,count;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>c;
        if(c.length()==5)
            cout<<"3\n";
        else{
                 count=0;
                if(c[0]=='o')count++;
                if(c[1]=='n')count++;
                if(c[2]=='e')count++;
            if(count>=2)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
    }
    return 0;

}

