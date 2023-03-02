#include <iostream>
using namespace std;

int main() {
    int n;
    int pl1=0,pl2=0;
    int win=0;
    int lead=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        pl1+=a;
        pl2+=b;
        int x=abs(pl1-pl2);
        if(x>lead) {lead=x;
	            
	  pl1>pl2?win=1:win=2;
        }
    }
    cout<<win<<" "<<lead<<endl;
	// your code goes here
	return 0;
}
