#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (b>=a && b>=c) cout<<"Yes\n";
        else cout<<"No\n";
    }
	// your code goes here
	return 0;
}
