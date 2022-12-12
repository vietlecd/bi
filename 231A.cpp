o#include <iostream>
#include <string>
using namespace std;

	int sum = 0;
int i,n,a[3],res;
int main() {
	cin >> n;
	for (i=0; i<n; i++) {
		sum = 0;
		for(int j = 0; j < 3; ++j) {
			cin >> a[j];
			if(a[j]==1) ++sum;
			
		}
		if(sum/2>=1) ++res;
	}
	cout << res;
	return 0;
}
