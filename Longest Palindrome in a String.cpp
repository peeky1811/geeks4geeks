#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string str;
	long n;
	while(t--){
	    cin>>str;
	    n=str.size();
	    bool table[n][n];
	    memset(table, 0, sizeof(table));
	    int maxlen=1, start=0, min=INT_MAX;
	    for(int i=0;i<n;i++)
	        table[i][i]=1;
	    for(int i=0;i<n-1;i++)
	        if (str[i]==str[i+1]){
	            table[i][i+1]=1;
	            if(i<min){
	                start=i;
	                min=start;
	            }
	            maxlen=2;
	        }
	    for(int k=3; k<=n; k++){
	        for(int i=0; i<=n-k; i++){
	            int j=i+k-1;
	            if(str[i]==str[j] && table[i+1][j-1]){
	                table[i][j]=1;
	                if(k>maxlen){
	                    start=i;
	                    maxlen=k;
	                }
	            }
	        }
	    }
	    for(int i=start; i<=start+maxlen-1; i++){
	        cout<<str[i];
	    }
	    cout<<"\n";
	}
	return 0;
}
