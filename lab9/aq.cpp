#include<iostream>
using namespace std;

int main()
{
	int x,count=0;
	cin>>x;
	for(int i=1; i<=x; ++i){
		for(int s=0; s<x; ++s ){
		if(x%s==0){
			count++;
if(count==2){
		cout<<s;}
	
		}}
}
		

	
	return 0;
}