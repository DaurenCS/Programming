#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin>>s;

	for(int i=0; i<s.size(); i++){

		if(int(s[i])>=97 && int(s[i])<122){

			(s[i])+=1;
		}

		else if(int(s[i])==122){
			(s[i])='a';
		}



	
	}

	cout<<s;







}
