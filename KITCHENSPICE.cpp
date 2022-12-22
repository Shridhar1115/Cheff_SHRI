#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if (a<4) cout<<"MILD\n";
        else if (a>=4 && a<7) cout<<"MEDIUM\n";
        else cout<<"HOT\n";
    }
	// your code goes here
	return 0;
}
