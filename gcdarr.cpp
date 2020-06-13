#include <iostream>
using namespace std;

// calculate gcd of 2 nos.
long gcd(long a, long b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

long gcdarr(long a[], long n){
    long result=a[0];
    for(long i=1;i<n;i++){
        result=gcd(result,a[i]);
        //if result=1 then stop there as gcd(1,anyno)=1,... can reduce many steps
        if(result==1)
            break;
    }
    return result;
}

int main() {
	//code
	int t;
	long n,a[1000000];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cout<<gcdarr(a,n)<<"\n";
	}
	return 0;
}
