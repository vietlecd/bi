#include<iostream>

using namespace std;
int x[100];

int main() {
	
	int n; cin >> n;
	int a,b,c;
	for (int i=0; i<4; i++) {
		cin >> x[i];
		x[0]=a+b;
		x[1]=a+c;
		x[2]=b+c;
		x[3]=a+b+c;
	}
	cout << a << b << c;
	return 0;
}
