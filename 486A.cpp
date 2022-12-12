#include<iostream>
#include<math.h>
using namespace std;

	int x, y;

int number() {
	int a,b;
	int place =1, noko=0, result=0;
	while (x>=0) {
		a=x%10; b=y%10;
		result=((a+b)%2)*place+result;
		place*=10;	x/=10; y/=10;
		if (x==0) break;
	}
		return result;
}

int main() {
	cin >> x >> y;
	cout << number();
	return 0;
}
