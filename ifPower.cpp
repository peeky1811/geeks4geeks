#include <iostream>
#include <math.h>
using namespace std;

int ifPower(long x, long y){
    for(int i=0;i<=sqrt(y)+1;i++){
	        if(pow(x,i)==y){
	            return 1;
	        }
	    }
	return 0;
}
int main() {
	//code
	int t;
	long x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    cout<<ifPower(x,y)<<"\n";
	}
	return 0;
}
