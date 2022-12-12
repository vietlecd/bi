#include<iostream>
#include<string.h>
using namespace std;

string str;

int check(int cnt=0) {
	for (int i=0; i<str.size(); i++) {
		if (str[i]=='4' || str[i]=='7') cnt++;
	}
		if (cnt==4 || cnt==7) return 1;
		else return 0; 
	}

int main() {
	cin >> str;
	if (check()==1) cout << "YES";
	else cout << "NO";
}
	

