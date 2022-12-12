#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int c;
int n;
string str1;
int a[1005];
int cnt;

void sort () {
			for (int i=0; i<=cnt; i++) {
				for(int j=0; j<cnt; j++) {
						if (a[j]>a[j+1]) {
							int c= a[j];
							a[j]=a[j+1];
							a[j+1]=c;							
						}
					}
				}
}
	

int main() {
	cin >> str1; 
	for (int i=0; i<str1.size(); i++) {
		if (str1[i]=='+') cnt++;
		else  a[cnt]= (a[cnt] *10) + (str1[i]-'0'); 		
	}
	sort();
	for (int i=0; i<=cnt; ++i) {
		cout << a[i];
			if (i!=cnt)
			cout << '+';
	}

	return 0;
}
