void print(int a[], int n)
{
    for(int i=0;i<n;i++){
        if (i%2==0){
            cout<<a[i]<<" ";
        }
    }
}

void main(){
int t;
long n,a[10001];
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>a[j];
        }
    print(a,n);
}
