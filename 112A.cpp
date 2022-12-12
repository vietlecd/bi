#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
	int ans=0;
	string str1, str2;
	cin >> str1 >> str2;
	for (int i=0; i<=str1.size(); i++) {
		char a1=str1[i]; char a2=str2[i];
		if (abs(a1-a2)!=32 && abs(a1-a2)!=0) {
			if (a1<'a') a1+=32;
			if (a2<'a') a2+=32;
			if (a1<a2) ans-=1;
			if (a1>a2) ans+=1;
			break;
			}
	}
 	cout << ans; 
   return 0;

}
