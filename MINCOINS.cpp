#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        if (n%5==0){
        a=n/10;
        n=n%10;
        b=n/5;
        n=n%5;
        cout<<a+b<<endl;
        }
        else cout<<"-1\n";
    }
	// your code goes here
	return 0;
}
