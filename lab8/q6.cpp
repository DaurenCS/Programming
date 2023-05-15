#include<iostream>

using namespace std;

void fun(double a, double b){

	double x=(b/a)*100;

	cout<<x;

}

int main(){
	int a;
	int b;
	cin>>a>>b;

	fun(a,b);
}