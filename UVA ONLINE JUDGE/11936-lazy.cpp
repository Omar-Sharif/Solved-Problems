#include <iostream>
using namespace std;
int main()
{
    int N,a,b,c,i;
    cin >>N;
    for (i=0;i<N;i++){
        cin >>a>>b>>c;

        if((a+b)>c&&(b+c)>a&&(c+a)>b)
            cout <<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
