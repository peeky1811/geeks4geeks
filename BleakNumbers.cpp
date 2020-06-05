#include <iostream>
using namespace std;

int countSetBits(int n){
    int ctr=0;
	    while(n>0){
	        if(n%2==1)
	            ctr++;
	        n=n/2;
	    }
	return ctr;
}
int isBleak(int n){
    int j;
    for(j=0;j<n;j++){
	        if(n==(j+countSetBits(j)))
	            return 0;
	    }
    //reach till here means bleak
    return 1;
}
int main() {
	//code
	int t,n,i;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    cout<<isBleak(n)<<"\n";
	}
	return 0;
}
