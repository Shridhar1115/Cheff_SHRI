#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0){
        t--;
        int n,sum=0;
        cin>>n;
        for(int i=n;i>=1;i--){
            sum=sum+i;
        }
        if(sum%2==0){
            cout<<n<<endl;
        }
        else{
            cout<<(n-1)<<endl;
        }
    }
	// your code goes here
	return 0;
}
