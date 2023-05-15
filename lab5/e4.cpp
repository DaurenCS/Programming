#include <iostream>
using namespace std;

int main(){
int x; cin>>x;
string st="[*]";
for(int r=1; r<=x; r++ ){
	for(int c=1; c<=x; c++){
		if(r>=c ){
			cout<<st;

		}
		}
		cout<<endl;
	}
}

