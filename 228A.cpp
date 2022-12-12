#include <iostream>

int a[100];
int f[100];
using namespace std;

void sort() {
	for (int i=0; i<4; i++) {
		for (int j=0; j<3; j++) {
			if (a[j]<a[j+1]) {
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
}

int check() {
	int cnt = 0;
	for (int i=0; i<3; i++) {
		if (a[i]==a[i+1]) cnt++;
	}
	return cnt;
}

int main() {
	for (int i=0; i<4; i++) {
		cin >> a[i];
	}
	sort();
	cout << check();
	return 0;
}
	
