#include <bits/stdc++.h>

using namespace std; 

bool ispal(vector<char> v){
	for(int i=0; i<v.size()/2; i++){
		if(v[i]!=v[v.size()-1-i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	string s;
	cin>>s;
    vector<char> v;

	for(int i=0; i<s.size(); i++){
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end());

	do{
		if(ispal(v)){
			cout<<"ZA WARUDO TOKI WO TOMARE";
			return 0;
		}
}
		while(next_permutation(v.begin(),v.end()));
	cout<<"JOJO";
}