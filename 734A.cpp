#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
	string str;
	int n;
	int cnt1=0;
	int  cnt2=0; 
	cin >> n;
	cin >> str;
	for (int i=0; i<str.size(); i++) {
		if (str[i]=='A') cnt1++;
		if(str[i]=='D') cnt2++;
	}
	if (cnt1>cnt2) cout << "Anton";	
	else
		if(cnt1<cnt2) cout << "Danik";
	else cout << "Friendship";
return 0;
}
