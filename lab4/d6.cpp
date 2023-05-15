#include<bits/stdc++.h>

using namespace std;

string fun(int s, int a[], int b){
 string x;
	bool flag = false;
	

	for(int i=0; i<s; i++ ){
		if(a[i]==b){
			 flag = true;
			
			
		}
		
	}
		if(flag == true)x = "YES";
		else x = "NO";
		 return x; 
		
	





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
	
	
	cout<<fun(s,a,b);
}