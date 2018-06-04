#include<bits/stdc++.h>
using namespace std;
int ara[]={500,1000,1500,2000,2500};
int main()
{
   double aram[6];
   double araw[6];
   double hs,hu,total=0,m;

  for(int i=0;i<5;i++)
    cin>>aram[i];

  for(int i=0;i<5;i++)
    cin>>araw[i];

  cin>>hs>>hu;

  for(int i=0;i<5;i++){
    m=max(0.3*ara[i],(((1-(aram[i]/250))*ara[i])-50*araw[i]));
    total+=m;
  }
  total+=hs*100;
  total-=hu*50;
  cout<<total<<endl;

}

