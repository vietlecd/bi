#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t; cin >> t;
	long long a[10000000];
	long long b[10000000];
	long long c[10000000];
	for (int i=0; i<t; i++) {
		cin >> a[i] >> b[i];
		c[i]=0;	
		while (a[i]%b[i]!=0)  {
					c[i]++;
					a[i]+=1;
		} 
	}
	for (int i=0; i<t; i++) {
		cout << c[i] << "\n";
	} 
	return 0;
}
