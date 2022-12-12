#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	int a;
	int b;
	int sum=0;
	cin >> a >> b;
	while (a<=b) {
		a=a*3;
		b=b*2;
		sum++;
	}
	cout << sum;
	return 0;
}
