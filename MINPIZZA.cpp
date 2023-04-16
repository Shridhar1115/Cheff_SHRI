#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        c=a*b;
        int d=c/4;
        if (c%4>0) d=d+1;
        cout<<d<<endl;
    }
	// your code goes here
	return 0;
}
