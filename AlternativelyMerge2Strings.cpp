#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[100], b[100], c[1000];
	int la, lb, k;
	cin>>a;
    cin>>b;
    la=strlen(a);
    lb=strlen(b);
    if(la>lb){
        k=0;
        //alternatively take elements from a and b upto the length of the smaller string
        for(int i=0;i<lb;i++){
            c[k++]=a[i];
            c[k++]=b[i];
        }
        //add remaining elements from the bigger string starting from the size of the smaller string
        for(int j=lb;j<la;j++){
            c[k++]=a[j];
        }
        cout<<c;
    }
    else{
        k=0;
        //alternatively take elements from a and b upto the length of the smaller string
        for(int i=0;i<la;i++){
            c[k++]=a[i];
            c[k++]=b[i];
        }
        //add remaining elements from the bigger string starting from the size of the smaller string
        for(int j=la;j<lb;j++){
            c[k++]=b[j];
        }
        cout<<c;
    }
	return 0;
}
