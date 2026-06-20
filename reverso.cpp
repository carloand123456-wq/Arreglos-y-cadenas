#include <iostream>
using namespace std;
int main(){
	int A[1000], n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=0; i<int(n/2); i++){
		int aux=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=aux;
	}
	for(int i=0; i<n;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}