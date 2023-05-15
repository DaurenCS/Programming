#include <iostream>
 using namespace std;
 int main(){
 	int n,i,maxi;
 	cin >> n;
 	int a[n];
 	for (i=1; i<=n; i++){
 		cin >> a[i];

 	}
 	maxi=a[1];
 	for (i=1; i<=n; i++){
 		if (a[i]>maxi) {
 			maxi=a[i];

 		}
 	}
 	cout << maxi;
 }