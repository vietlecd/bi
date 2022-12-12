#include<iostream>
#include<string.h>

using namespace std;

int f[200];

int main() {
	int n; cin >> n;
	int sum=0;
	string str; cin >> str;
	if (str.size()==n) {
		for (int i=0; i<str.size(); i++) {
			f[str[i]]=1;	 
		}
	}
	for (int i='a'; i<='z'; i++) {
		if(f[i] == 1 || f[i-32] == 1) ++ sum;

	}
	if (sum==26) cout << "YES";
	else cout << "NO";
	return 0;
}
