#include <iostream>

using namespace std;

void fun(int s, int a[], int b ){
	for(int i=0; i<s; i++){
		if(a[i]==b){
			cout<<"YES";
			exit(0);
		}
	}
		cout<<"NO";
		exit(0);

	 
	

}

int main(){
	int s;
	cin>>s;

	int a[s];
	int b;

	for(int i=0; i<s; i++){
		cin>>a[i];
	}
	
	cin>>b;

 fun(s,a,b);
}