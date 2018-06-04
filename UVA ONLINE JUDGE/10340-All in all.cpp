#include <iostream>
using namespace std;

int main()
{
    int i,j,c,d,k;
    string s,t;
    while((cin >> s>>t)){
            c=0;
            d=0;
        for(i=0;i<s.length();i++){
            for(j=d;j<t.length();j++){
                if(s[i]==t[j]){
                    c=c+1;
                    k=j;
                    d=k+1;
                    break;
                }
        }
    }
     if(s.length()==c) cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
}
return 0;

}
