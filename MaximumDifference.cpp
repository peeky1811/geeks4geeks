#include <bits/stdc++.h>
using namespace std;

long maxDiff(long a[], long n){
    long diff=a[1]-a[0];
    long min=a[0];
    for(long i=1; i<n; i++)
        {
           if((a[i]-min)>diff){
               diff=a[i]-min;
           }
           if(a[i]<min){
               min=a[i];
           }
        }
    return diff;
}

int main() {
	//code
	int t;
	long n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long a[n];
	    for(long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cout<<maxDiff(a,n)<<"\n";
	}
	return 0;
}
