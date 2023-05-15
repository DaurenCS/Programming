#include <bits/stdc++.h>

using namespace std;

void fun(string s){

	for(int i=0; i<s.size(); i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
			s.erase(i,1);
			i--;
			
		}
	}
	for(int i=0; i<s.size(); i++){
		cout<<s[i];
	}

} 

int main(){
	string s;

	getline(cin,s);

	fun(s);
}