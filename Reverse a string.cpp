#include <iostream>
#include <cstring>
using namespace std;

void reverse(char s[]){
    int left=0, right=(strlen(s)-1),temp;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    cout<<s<<"\n";
}

int main() {
	//code
	int i,t;
	char s[2000];
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>s;
	    reverse(s);
	}
	return 0;
}
