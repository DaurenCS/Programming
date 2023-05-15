#include<bits/stdc++.h>

using namespace std;

void fun(string s){

	for(int i=0; i<s.size(); i++){
		if(i%2==0){
			cout<<(char)toupper(s[i]);
		}

		else cout<<s[i];
		
	}



}

int main(){
	string s;

	cin>>s;

	fun(s);
}