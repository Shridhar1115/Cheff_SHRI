#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if (m>n) cout<<n<<endl;
        else cout<<(m+(n-m)*2)<<endl;
    }
	// your code goes here
	return 0;
}
