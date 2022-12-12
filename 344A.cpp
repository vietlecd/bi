#include<iostream>
#include<math.h>
using namespace std;

long long a[10000];

int main() {
	int n; cin >> n;
	int cnt=1;
	for (int i=0; i<n; i++) {
			cin >> a[i];	
			if (a[i+1]-a[i]==1 ) cnt++; cout << a[i+1]-a[i] << '\n';
		}
	cout << cnt;
	return 0;
}

