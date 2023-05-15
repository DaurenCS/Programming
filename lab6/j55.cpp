#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	s.erase(0, 1);
	for(int i = 0; i < s.size()/2; i++){
		if(s[i] != s[s.size()-1]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}