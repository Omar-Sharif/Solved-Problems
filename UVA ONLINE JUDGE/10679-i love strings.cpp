#include <iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    string l,str,str2;
    cin >> n;
    getline(cin,l);
    for(i=0;i<n;i++){
        getline(cin,str);
        getline(cin,l);
        cin >> k;
        for(j=0;j<k;j++){
            getline(cin,str2);
            search(str2,str);
        cout <<'y'<<endl;
        }
    }
}

