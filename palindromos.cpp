#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, lg;
	string A[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		lg=A[i].length();
		bool esPalindromo = true;
		for(int j=0;j<int(lg/2);j++){
			if(A[i][j]!=A[i][lg-j-1]){
				esPalindromo = false;
				break;
			}
		}
		if(esPalindromo){
			cout<<"P\n";
		}
		else{
			cout<<"NP\n";
		}
	}
	return 0;
}