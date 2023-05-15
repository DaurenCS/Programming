#include <iostream>

using namespace std; 

void fun(int n){
	int a;
	cin>>a;
	if(a==0){
		cout<<n;
		return;
	}
	fun(a+n);
}

int main(){
	fun(0);
}