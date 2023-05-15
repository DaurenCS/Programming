#include <bits/stdc++.h>
using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	string tt = "";
	int x = t.size()/s.size();
	for(int i = 0; i < x; i++){
		tt += s;
	}
	if(tt == t)cout << "YES";
	else cout << "NO";

	return 0;
}