#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if (a<=70) cout<<"0\n";
        else if (a>70 && a<=100) cout<<"500\n";
        else cout<<"2000\n";
    }
	// your code goes here
	return 0;
}
