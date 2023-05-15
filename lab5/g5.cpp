#include <iostream>
using namespace std;
int main(){

string x;
string y;
cin>>x>>y;

string a;
string b;

for(int i=0; i<x.size(); i++){
  a+=x[i];	
}

for(int i=0; i<y.size(); i++){
	b+=y[i];
}

	
if(a==b){
	cout<<"YES";

}
else
cout<<"NO";

}