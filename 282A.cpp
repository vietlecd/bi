#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int n,i,k,x;
	string test;
	cin >> n;
	k=0; x=0; 
	for (i=1; i<=n; i++) {
		cin >> test ; 
		if (test[1] == '+') ++k;
		else --k;
    }	
	cout << k;
	return 0;
}
