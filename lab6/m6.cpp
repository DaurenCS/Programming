#include <bits/stdc++.h>

using namespace std;

void fun(int s, int a[]){

	

		reverse(a, a+s);
	
for(int i=0; i<s; i++){
		cout<<a[i]<<" ";
	}


}


int main(){
	int s;
	cin>>s;

	int a[s];

	for(int i=0; i<s; i++){

		cin>>a[i];
	}

	fun(s, a);
}