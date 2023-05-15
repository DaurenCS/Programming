#include<bits/stdc++.h>

using namespace std; 

bool isPrime(int x)
{ 
	if(x==0 || x==1){
		return false;
	}

	
	else{
    for(int i=2; i<= sqrt(x); i++)
    {
        if ((x%i) == 0)
            return false;
        
            
    }
    return true;

 } 
}

int main(){
	int n; cin>>n;

	vector<int> v(n);

	for(int i=0; i<n; i++){
         int x;
		cin>>x;
		v[i]=abs(x);
	}
	int myp=count_if(v.begin(),v.end(),isPrime);
    cout<<myp;
}