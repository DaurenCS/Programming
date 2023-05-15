#include<bits/stdc++.h>

using namespace std;

void fun(int s, int a[], int b[] ){

	int cont=0;
		sort(a,a+s);
		sort(b,b+s);
int i=0; int j=0;
		while(i<s && j<s){
			if(a[i]==b[j]){
				cont++;
				i++;
				j++;
			}
			else if(a[i]<b[j]){
				i++;
			}
			else if(a[i]>b[j]){
				j++;
			}
		}

cout<<cont;
	}

int main(){
	int s;
	cin>>s;
	int a[s];
	int b[s];

	for(int i=0; i<s; i++){
		cin>>a[i];
	}
	for(int j=0; j<s; j++){
		cin>>b[j];
	}

	fun(s,a,b);


}