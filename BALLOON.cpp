#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    int s=0,count=0;
	    for(int i=0; i<n; i++)
	    {
	        s++;
	        if(a[i]>=1 && a[i]<=7) count++;
	        if(count==7) break;
	    }
	    cout << s << endl;
	}
	return 0;
}