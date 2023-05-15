#include<bits/stdc++.h>

using namespace std;

void fun(int a){
	if(a==1){
		cout<<a<<" ";
		//return;
	}
	else{
	 fun(a-1);
	 cout<<a<<" ";
}
}

int main(){
	int a;
	cin>>a;

	fun(a);

}