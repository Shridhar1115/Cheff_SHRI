#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int x,y,z;
	for(int i=0;i<n;i++){
	cin >> x >> y >> z;
	int credit = 4*x + 2*y;
	cout << credit << endl;
	}
	return 0;
}
