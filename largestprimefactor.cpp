#include <iostream>
#include <math.h>
using namespace std;

long maxPrime(long n){
    long maxprime=0;
    while(n%2==0){
        maxprime=2;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            maxprime=i;
            n=n/i;
        }
    }
    if(n>2){
        maxprime=n;
    }
    return maxprime;
}

int main() {
	//code
	int t;
	long n;
	cin>>t;
	while(t--){
	    cin>>n;
        cout<<maxPrime(n)<<"\n";
	}
	return 0;
}
