#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        std::cin >> a>>b;
        if (a>b) cout<<b<<endl;
        else {
            int c=b-a;
            cout<<a + c*2<<endl;
        }
    }
	// your code goes here
	return 0;
}
