#include<bits/stdc++.h>

using namespace std;

string fun(int x, int a[], int b, int index) {

 if(index < x) {
  if(a[index+1] - a[index] > b){
   return fun(x, a, b, index+1);
  } else {
   return "cheater";
  }
 }
 
 return "no";
}

int main(){
 int x; cin>>x;
 int a[x];
 int b; cin>>b;
 for(int i=0; i<x; i++){
  cin>> a[i];
 }
 sort(a,a+x);
 
 cout << fun(x,a,b,0);
}