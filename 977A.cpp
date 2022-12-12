#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,k;
	cin >> a;
	cin >> k;
	for (int i=1; i<=k; i++) {
		if (a%10==0) {
			a/=10;
		}
		else a--;
	}
	cout << a;
	return 0;
}
