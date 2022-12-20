#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3)   cout<<"LIGHT\n";
        else if (n>=3 && n<7) cout<<"MODERATE\n";
        else cout<<"HEAVY\n";
    }
	// your code goes here
	return 0;
}
