#include <iostream>
#include <string.h>

using namespace std;

int main () {
	string str1, str2;
	int cnt=0;
	cin >> str1;
	cin >> str2;
	char a,b;
	for (int i =0; i<str1.size(); i++) {
	a=str1[i];
	b=str2[str2.size()-i-1];
	if (a!=b) cnt++ ;
	}
	if (cnt!=0) cout << "NO";
	else cout << "YES";
	return 0;
}
