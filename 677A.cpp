#include<iostream>

using namespace std;

long long a[10000];

int main() {
	int n,h; cin >> n >> h;
	int cnt=0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]<=h) cnt++;
		else cnt+=2;
	}
	cout << cnt;
	return 0;
}
