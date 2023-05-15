#include <iostream>
 using namespace std;
 int main(){
 	int i,n,odd,even;
 	int a[1000];
 	cin >> n;
 	even=0;
 	odd=0;
 	for (i=1; i<=n; i++){
 		cin >> a[i];

 	}

 	for (i=1; i<=n; i++) {
 		if (a[i]%2==0) {
 			even=even+1;
 		} else {
 			odd=odd+1;
 		}
 	}
 	cout << even << "    " << odd;

 	return 0;

 }