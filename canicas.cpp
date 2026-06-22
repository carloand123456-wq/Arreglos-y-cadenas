#include <iostream>
using namespace std;

int main (){
	int N[1000]={0}, C[1000], n, c;
	cin>>n>>c;
	for(int i=0;i<c;i++){
		cin>>C[i];
		N[C[i]]++;
	}
	for(int i=1;i<=n;i++){
		cout<<N[i]<<endl;
	}
	return 0;
}