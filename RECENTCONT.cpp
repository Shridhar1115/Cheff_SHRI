#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        int START38=0;
        int LTIME108=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]=="START38"){
            START38++;}
            else LTIME108++;
        }
        cout<<START38<<" "<<LTIME108<<endl;
    }
	// your code goes here
	return 0;
}
