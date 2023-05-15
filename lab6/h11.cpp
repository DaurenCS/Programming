#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	string s;
	cin>>s;
      vector<char> v;
	for(int i=0; i<s.size(); i++){
		v.push_back((s[i]-65 + n)%26);

    }
    for(int i=0; i<s.size(); i++){
    	cout << char(v[i]+65);
    }
  
  
}