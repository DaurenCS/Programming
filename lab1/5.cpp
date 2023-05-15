#include <bits/stdc++.h>

using namespace std;

int fun(int x, int y){
	 return x^y;

}
int g(int x, int y){
	return fun(x,fun(y,x+y));
}

int main(){
	int x,y;
	cin>>x>>y;

 cout<<g(x,y);
}