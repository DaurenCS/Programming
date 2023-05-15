#include<iostream>

using namespace std;

void fun(string s){

for(int i=0; i<s.size(); i++ ){
	cout<<(char)toupper(s[i]);
}


}

int main(){
	string s;
	cin>>s;

	fun(s);
}