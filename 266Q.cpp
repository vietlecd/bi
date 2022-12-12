#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	string str;
	int n;
	cin >> n;
		cin >> str;
	int cnt=0;
	for (int i=0; i<n; i++) {
		if (str[i]==str[i+1]) cnt++;
	}
	cout << cnt;
	return 0;
}
