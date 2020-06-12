#include <iostream>
using namespace std;

void sieveOfEratosthenes(long n){
    int primes[n+1];
    //initially, setting all numbers as 1(prime)
    for(int i=2; i<=n; i++)
        primes[i]=1;
    
    for(int i=2; i<=n; i++)
        if(primes[i]==1)
            for(int j=2; (i*j)<=n;j++)
                primes[i*j]=0;
            
    for(int i=2;i<=n;i++)
        if(primes[i])
            cout<<i<<" ";
    cout<<"\n";
}

int main() {
	//code
	int t;
	cin>>t;
	long n;
	while(t--){
	    cin>>n;
	    sieveOfEratosthenes(n);
	}
	return 0;
}
