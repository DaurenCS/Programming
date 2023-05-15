#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int x = min(n,m);
	for(int i = x; i <= 0; i--){
		if(n%i == 0 and m % i == 0){
		cout << i;
		break;
		}
	}
	return 0;
}
