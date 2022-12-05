#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0){
	    t--;
	    int a,b,l;
	    cin>>a>>b;
	    int sum = a + b;
	    int n=0;
	    while(sum>0){
	        l=sum%10;
	        if (l==0 || l== 6 || l==9) 
	        n=n+6;
	        else if (l==1)
	        n=n+2;
	        else if (l==3 || l==2 || l==5)
	        n=n+5;
	        else if (l==8)
	        n=n+7;
	        else if (l==4)
	        n=n+4;
	        else if (l==7)
	        n=n+3;
	        sum=sum/10;
	    }
	    cout<<n<<endl;
	}
	return 0;
}
