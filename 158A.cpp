#include <iostream>
#include <string>
using namespace std;

int i,n,k,res,a[100];
int main() {
	cin >> n >> k;
		for (i=1; i<=n; i++ ) {
					cin >> a[i];
					if (a[i]>=a[k]&&a[i]>0) {
						res++;
					}
			}
			cout << res;
		return 0;
	}
