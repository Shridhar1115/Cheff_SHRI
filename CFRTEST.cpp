#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for( int i=0;i<n;i++) 
	    cin>>a[i];
	    int count=0;
	    for (int i=0; i<n; i++)
        {
            int j;
            for (j=0; j<i; j++)
                if (a[i] == a[j])
                    break;
 
            if (i == j)
            {count++;}
        }
	   cout<<count<<endl;
	}
	return 0;
}