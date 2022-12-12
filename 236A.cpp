#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int i=0; int fl[1000];
int cnt=0;
string str;

int main() {
	cin >> str;
	for (i=0; i<str.size(); i++) {
		fl[str[i]]=1;
	}
	for (i='a'; i<='z'; i++) cnt+=fl[i];
	if (cnt%2==0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}

