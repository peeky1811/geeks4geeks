#include <iostream>
#include <math.h>
using namespace std;

bool prime(long long x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 0;
    }
    for(long long i=2; i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    //reach till here then prime
    return 1;
}

int main() {
	//code
	long t;
	long long n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long max=0;
        for(long long i=2; i<=n/2;i++){
            if((n%i==0) && prime(i) && i>max){
                        max=i;
                    }
        }
	   // for(int i=j-1; i>0;i--){
	   //     if(prime(ar[i])){
	   //         cout<<ar[i]<<"\n";
	   //     }
	   // }
	   cout<<max<<"\n";
	}
	return 0;
}
