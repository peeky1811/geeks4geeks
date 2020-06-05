#include <iostream>
using namespace std;

int main(){
	int binary[100],t,n,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    int len=0;
	    while(n>0){
	        binary[len]=n%2;
	        n=n/2;
	        len++;
	    }
	    for(j=len-1;j>=0;j--)
	        cout<<binary[j];
	    cout<<"\n";
	    
	}
	return 0;
}
