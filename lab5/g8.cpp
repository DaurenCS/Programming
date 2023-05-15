#include<iostream>
#include<vector>

using namespace std;

int fun(vector<int> v, int k){
	int cont=0;
	vector<int>::iterator i=v.begin();
	while(i!=v.end()){
		if(*i>k){
			cont++;
			for(int j=2; j*j<*i; j++){
				if(*i%j==0){
					cont--;
					break;
				}
			}
		}
		i++;
	} 
return cont;


}

int main(){
	int n,k; 
	cin>>n;
	vector<int> v; 

	while(n!=0){
		int a;
		 cin>>a;
		 v.push_back(a);
		 n--;
	}
	cin>>k;
	cout<<fun(v,k);
}

