#include <iostream>
using namespace std;
int main (){
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(i % 5 == 0 && (i % 10 == 5 || i%50 == 0))
			cout << i << " ";
		}
	}
	
