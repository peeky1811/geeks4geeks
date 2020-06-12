
bool prime(int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 0;
    }
    for(int i=2; i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    //reach till here then prime
    return 1;
}

int main() {
	//code
	int t;
	long n,ar[1000];
	cin>>t;
	while(t--){
	    cin>>n;
	    int j=0;
        for(int i=2; i<=n/2;i++){
            if(n%i==0){
                ar[j++]=i;
            }
        }
	    for(int i=j-1; i>0;i--){
	        if(prime(ar[i])){
	            cout<<ar[i]<<"\n";
	        }
	    }
	}
	return 0;
}
