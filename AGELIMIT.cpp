#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (c>=a && c<b) cout<<"YES\n";
        else if (c<=a) cout<<"NO\n";
        else cout<<"NO\n";
    }
	// your code goes here
	return 0;
}
