#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a<b) cout<<"FIRST\n";
        else if (b<a) cout<<"SECOND\n";
        else cout<<"ANY\n";
    }
	// your code goes here
	return 0;
}
