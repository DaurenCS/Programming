#include<bits/stdc++.h>

using namespace std;

int fun(int a){
	if(a == 0 || a == 1)
		return 1;
	return a*fun(a-1);

}

int main(){
	int a;
	cin>>a;

	cout<<fun(a);
}