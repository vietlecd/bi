#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int f[15];

int main() {
	int n; cin >> n;
	int b=n;
	while (1) {
		++b;
		int x1=b%10;
		int x2=b/10%10;
		int x3=b/100%10;
		int x4=b/1000%10;
		int sum=0;
		f[x1]=1;
		f[x2]=1;
		f[x3]=1;
		f[x4]=1;
		for (int i=0; i<10; i++) {
			sum+=f[i];
			f[i]=0;  
		}
		if(sum == 4) {
			cout << b;
			break;
		}
	}
return 0;
}
