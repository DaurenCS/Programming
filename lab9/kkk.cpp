#include<iostream>
using namespace std;
int main(){
	int x; cin>>x;
	int a[x],b[x];
	for(int i= 0; i<x; ++i){
		cin>>a[i];
		b[i]=0;
	}

for(int i= 0; i<x; ++i){
	bool isd = false;
	for(int j=0; j<i; j++){
		if(a[i]==a[j])
			isd = true;
	}
 if(!isd){
 	b[i] = a[i];
}
 }
for(int i=0; i<x; i++){
	if(b[i]!=0 ){
		cout<< b[i]<<" ";
	}
}




}