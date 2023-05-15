#include<bits/stdc++.h>
 
using namespace std; 

void fun(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[s.size()-1]==s[s.size()-2] && s[s.size()-1]=='1'){
			int ind = s.size()-2; 
			s.erase(ind,2);
          
		}
	}
	cout<<s;
}

int main(){
	string s;
	cin>>s;
	
	for(int i = 0; i < s.size(); i++){
		if(s[s.size()-1]==s[s.size()-2] && s[s.size()-1]=='1'){
			int ind = s.size()-2; 
			s.erase(ind,2);
          
		}
	}
	fun(s);




}