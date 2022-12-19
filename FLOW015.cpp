#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  string a[7];
  a[0]="sunday";
  a[1]="monday"; //siucjnsd
    a[2]="tuesday";
    a[3]="wednesday";
    a[4]="thursday";
    a[5]="friday";
  a[6]="saturday";  while(t--)
  {
      int n;
      cin>>n;
      int d=1;
      for(int i=1900;i<n;i++)
      {
          if(i%400==0 || (i%100!=0 && i%4==0))
              d+=2;
          else
              d+=1;
      }          
      d%=7;
      cout<<a[d]<<endl;
  }
  return 0;
}