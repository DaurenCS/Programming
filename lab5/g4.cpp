#include <iostream>
using namespace std;

int main(){
int x; cin>>x;
for(int r=1; r<=x; r++ ){
	for(int c=1; c<=x; c++){
		if(r+c==x+1){
			cout<<r;}
			else
				cout<<'.';
		
	}
cout<<endl;
}


}