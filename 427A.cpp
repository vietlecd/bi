#include <iostream>

using namespace std;

int main ()  {
	int a[100];
	int n; cin >> n;
	int cnt=0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]+a[i-1]!=0) cnt++;
	}
	cout << cnt;
	return 0;
}

