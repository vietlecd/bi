#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int i,j,x;
	for (i=1; i<=5; i++ ) {
		for (j=1; j<=5; j++) {
			cin >> x;
			if (x == 1) {
				cout << abs(3-i) + abs(3-j);
			}			
		}
	}
	return 0;	
}
