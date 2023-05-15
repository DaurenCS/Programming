#include<bits/stdc++.h>


using namespace std;

void fun(string a, int index, char max){
	 

	if(a[index]>max){
		max=a[index];
	}
	if(index==a.size()-1){
		cout<<max;
		return;
	}
	
	
	fun(a,index+1,max);
}

int main(){
	string a;
	
	cin>>a;
	char max=a[0];
	int index;

	fun(a,0,max);
}