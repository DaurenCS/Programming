
#include<iostream>

using namespace std;

int main(){

	string s;

	getline(cin, s);

	for(int i=s.size(); i>0; i--){
		if(isdigit(s[i]))
			cout<<s[i];
		
	}
}