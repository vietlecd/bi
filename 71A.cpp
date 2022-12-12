#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	for (int i=0; i<str1.size(); i++) {9
		cout << (str1[i] != str2[i]);
	}
	return 0;
}
