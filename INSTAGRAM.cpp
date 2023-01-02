#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a<b) cout<<"NO\n";
        else if (a>(10*b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
	// your code goes here
	return 0;
}
