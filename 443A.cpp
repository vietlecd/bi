#include<iostream>
#include<string.h>

using namespace std;

int f[200];

int main() {
    string str; getline(cin,str);
    int sum=0;
    for (int i=0; i<str.size(); i++) {
    	 f[str[i]]=1;
    }
    for (int i='a'; i<='z'; i++) {
		sum+=f[i];
    }  
    cout << sum;
    return 0;
}
