#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int k, n, w;
	int sum=0;
	cin >> k >> n >> w;
	for (int i=1; i<=w; i++) {
		sum+=k*i;
	}
	if (n>sum) cout << "0";
	else 
		cout << abs(n-sum);
	return 0;
}
