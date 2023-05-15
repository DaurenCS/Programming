#include<bits/stdc++.h>

using namespace std;

int fun(string a, int index){
	if(index== a.size()-1){
		return (a[index]-'0')/2;
	}
	return (a[index]-'0')/2 + fun(a, index+1);

}

int main(){
	string a;
	cin>>a;

	cout<<fun(a,0);
}