#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int n; cin >> n;
	int sum=0;
	string car[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
	int mu[5] = {4,6,8,12,20};
	
	for(int i = 0; i < n; ++i) {
		string str; cin >> str;
		for(int j = 0; j < 5; ++j)
			if(str == car[j]) sum += mu[j];
		
	}
	cout << sum	;
	/*
	for (int i=0; i<n; i++) {
		a=str[i];
		cin >> str;
	}
	for (int i=0; i<n; i++) {
	if (a==car[i]) su+=mu[i];
	
	a[mu[i]] = car[i];
}
	cout << su;*/
	return 0;
}
