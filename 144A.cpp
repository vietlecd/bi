#include<iostream>

using namespace std;

int a[105];
int cnt=0;

void bubblesort (int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
                if (a[j]>a[j+1]) cnt++;
        }
    }
}

int main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << cnt; 
}