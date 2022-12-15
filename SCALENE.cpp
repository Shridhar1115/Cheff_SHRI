#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b || a==c) cout<<"NO\n";
        else if (b==a || b==c) cout<<"NO\n";
        else cout<<"YES\n";
    }
	// your code goes here
	return 0;
}
