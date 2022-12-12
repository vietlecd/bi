#include<iostream>

using namespace std;

int a[100], b[100], c[100];

int main() {
	int n; cin >> n;
	int cnt=0;
	for (int i=0; i<n; i++) {
		cin >> a[i] >> b[i];
		c[i]=b[i]-a[i];
	}
	for (int i=0; i<n; i++) {
		if (c[i]>=2) cnt++;
	}
	cout << cnt;
	return 0;
}
