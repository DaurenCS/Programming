#include<bits/stdc++.h>

using namespace std;

void fun(int a, int b){


	double c= sqrt(pow(a,2)+pow(b,2)); 

	cout<<setprecision(4)<<c;


}

int main(){
	int a;
	int b;

	cin>>a>>b;

	fun(a,b);
}