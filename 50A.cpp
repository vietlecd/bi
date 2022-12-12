#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int d,r,k;
    int area;
	cin >> r >> d;
	area=r*d; k= area/2;
	if (area%2==0) cout << k;
	if (area%2==1) cout << (double)k;
	return 0; 
	}
