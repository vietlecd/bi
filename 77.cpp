#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[10000],b[10000],c[10000];
    for (int i=0;i<n;++i){
        cin>>a[i];
        cin>>b[i];
        if(a[i]%b[i]!=0) {
			c[i]=b[i]-a[i]%b[i];
		} else c[i]=0;
    }
    for(int i=0;i<n;++i){
        cout<<c[i]<<endl;
    }
    return 0;
}
