#include <iostream>
#include <algorithm>
using namespace std;

int main() {    
    int t;
    cin>>t;
    while(t--){
    int n,m,w;
    cin>>n>>w;
    m=n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0;
    while(w>0){
        w=w-a[n-1];
        n--;
        i++;
    }
    cout<<m-i<<endl;
        
    }
	// your code goes here
	return 0;
}
