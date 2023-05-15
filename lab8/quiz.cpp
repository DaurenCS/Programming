#include <iostream>
using namespace std;

int main(){
	int x; cin>>x;

	int a[x][x];

	 for(int r=0; r<x; r++ ){
	 	for(int c=0; c<x; c++){

	cin>>a[r][c];
	 }
}


    for(int c=2; c>=0; c-- ){
    	for(int r=0; r<x; r++){
    		if(r == 0 ){
    		cout<<a[r][c]<<" ";
                 }
                 else if(c==0){
                 	cout<<a[r][c];
                 }
    	}
    	cout<<endl;
    }



return 0;
}
