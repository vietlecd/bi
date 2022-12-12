#include <iostream>

using namespace std;
int main() {
	int n; cin >> n;
	int a, b;
	int sum=0;
	int mx=0;
	for (int i=0; i<n; i++) {
		cin >> a >> b;
		sum=sum + b-a;
		if(mx<sum) mx = sum;
	}
	cout << mx;
	return 0;
}
