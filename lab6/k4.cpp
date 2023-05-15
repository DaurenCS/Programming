#include<iostream>
using namespace std;
int main(){
int x,y; cin>>x>>y;
int a[x][y];
for (int row = 0; row < x; ++row){
	for(int col=0 ; col< y; ++col){
		cin>>a[row][col];
	}
}
 
 int sum1;
	for (int row = 0; row < x; ++row){
	sum1=0;
	for(int col=0 ; col<y ; ++col){

   
   sum1= sum1 +a[row][col];
}


	cout<<"The sum of row number "<<row+1<<" is "<< sum1<<endl;
}

int sum2;
for(int col=0;col<y;++col){
	sum2=0;
	for(int row=0;row<x; ++row){
		sum2= sum2+ a[row][col];

	}
cout<<"The sum of column number "<<col+1<<" is "<< sum2<<endl;
}







}