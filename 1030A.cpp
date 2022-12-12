#include<iostream>

using namespace std;
int c[100];
int sum=0;

int main() {
	int n; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> c[i];
		sum+=c[i];
		}
	if (sum!=0) cout << "HARD";
	else cout << "EASY";
	return 0;
	}
