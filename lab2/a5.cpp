#include <iostream>
using namespace std;
int main (){
string s;
cin>>s;
int cont=0;

for(int i=0; i<s.size(); i++){
	if(s[i]<=90 && s[i]>=65){
		cont++;
	

	}
}


cout<<s.size()-cont<<" "<<cont ;







}