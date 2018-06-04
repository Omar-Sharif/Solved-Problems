#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int cas=1;
    while(cin>>s)
    {
        if(s=="#")
            break;
        else if(s=="HELLO"){
            cout<<"Case "<<cas<<':'<<" ENGLISH"<<endl;
            cas++;
        }
        else if(s=="HOLA"){
            cout<<"Case "<<cas<<':'<<" SPANISH"<<endl;
            cas++;
        }
        else if(s=="HALLO"){
            cout<<"Case "<<cas<<':'<<" GERMAN"<<endl;
            cas++;
        }
        else if(s=="BONJOUR"){
            cout<<"Case "<<cas<<':'<<" FRENCH"<<endl;
            cas++;
        }
        else if(s=="CIAO"){
            cout<<"Case "<<cas<<':'<<" ITALIAN"<<endl;
            cas++;
        }
        else if(s=="ZDRAVSTVUJTE"){
            cout<<"Case "<<cas<<':'<<" RUSSIAN"<<endl;
            cas++;
        }
        else{
            cout<<"Case "<<cas<<':'<<" UNKNOWN"<<endl;
            cas++;
        }
    }
    return 0;
}
