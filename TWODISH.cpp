#include <iostream>
using namespace std;

int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){
int n,a,b,c;
cin >> n>>a>>b>>c;
int sum=0;
while(b>0){
  if(a>=1){
    a = a-1;
    b = b-1;
    sum = sum+1;
  }
  
 else if(c>=1){
    c= c-1;
    b=b-1;
    sum =sum+1;
  }
  else{
    b=0;
  }
  }
  if(sum >= n){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}
  return 0;

}