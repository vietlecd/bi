#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	int cnt=0;
	cin >> n;
		int ans=0;
		if (n%5==0) {
				ans=n/5;
				cout << ans;
		}
		else 
		 	if (n%5!=0) {
		 		ans=n/5+1;
		 		cout << ans;
		}
	return 0;
}
