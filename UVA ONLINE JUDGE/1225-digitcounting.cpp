#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t,n,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    cin >> t;

    while(t--)
    {
        cin >>n;
        c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
        if(n<=9){
            for(int i=1;i<=n;i++){
                if(i==1)c1++;
                else if(i==2)c2++;
                else if(i==3)c3++;
                else if(i==4)c4++;
                else if(i==5)c5++;
                else if(i==6)c6++;
                else if(i==7)c7++;
                else if(i==8)c8++;
                else if(i==9)c9++;
            }
        }
        else
        {
            for(int i=1;i<=n;i++){
                    int b=i;
                while(b!=0){
                    int a=b%10;
                     b/=10;
                    if(a==1)c1++;
                else if(a==2)c2++;
                else if(a==3)c3++;
                else if(a==4)c4++;
                else if(a==5)c5++;
                else if(a==6)c6++;
                else if(a==7)c7++;
                else if(a==8)c8++;
                else if(a==9)c9++;
                else if(a==0)c0++;
                    }
                }
            }
            cout <<c0<<' '<<c1<<' '<<c2<<' '<<c3<<' '<<c4<<' '<<c5<<' '<<c6<<' '<<c7<<' '<<c8<<' '<<c9<<endl;
        }
    return 0;
}
