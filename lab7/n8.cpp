#include <bits/stdc++.h>
#include<set>
#include <algorithm>

using namespace std;

int main(){
	int n; cin>>n;
	
	set<int> s;

	while(n!=0){
		int a;
		cin>>a;
		s.insert(a);
		n--;
	}
  int sum=0;
set<int>::iterator i=s.begin();
while(i!=s.end()){
 if(*i%2!=0){
 	cout<<*i<<" ";
 }

i++;
}

		
}