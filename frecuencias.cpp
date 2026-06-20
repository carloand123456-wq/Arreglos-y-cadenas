#include <iostream>
using namespace std;
int main(){
	int P, F[101]={0}, A[1001], n;
	cin>>P>>n;
	for(int i=0; i<n;i++){
		cin>>A[i];
		F[A[i]]++;
	}
	for(int i=1;i<=P;i++){
		cout<<i<<"-"<<F[i]<<endl;
	}
	return 0;
}