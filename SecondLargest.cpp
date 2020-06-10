#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,a[1200];
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int max=0,secondmax=0;
	    for(int j=0;j<n;j++){ 
	        cin>>a[j];
	        if(a[j]>max){   
	            secondmax=max;
	            max=a[j];
	           // cout<<max<<"\n";
	        }
	        if(a[j]<max and a[j]>secondmax){
	            secondmax=a[j];
	        }
	    }
	    cout<<secondmax<<"\n";
    }
	return 0;
}
