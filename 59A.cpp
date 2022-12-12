#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string str1;
	cin >> str1;
	int cnt1=0;
	int cnt2=0;
	for(int i=0; i<str1.size(); i++){
		if(str1[i]<'a') cnt1++;
		else cnt2++;
		}
		for(int i=0; i<str1.size(); i++){
			if (cnt1>cnt2 && str1[i] >= 'a') {
				str1[i]-=32;
			}
			if (cnt1<=cnt2 && str1[i] < 'a') {
				str1[i]+=32;
			}	
		}
	cout << str1;
	return 0;
	}
