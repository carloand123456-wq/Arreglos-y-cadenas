#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string oracion;
	int n, pos[100], tl=0;
	char l[100];
	getline(cin, oracion);
	n = oracion.length();
	for(int i=0;i<n;i++){
		if(oracion[i]>='a' && oracion[i]<='z'){
			l[tl]=oracion[i];
			pos[tl]=i;
			tl++;
		}
	}
	sort(l,l+tl);
	for(int i=0;i<tl;i++){
		int pos_ori=pos[i];
		oracion[pos_ori]=l[i];
	}
	cout<< oracion<<endl;
	return 0;
}