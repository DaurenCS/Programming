#include<iostream>
using namespace std;

  int main(){
 int x;cin>>x;
int a[x], b[x];


for(int i=0; i<x; ++i){
cin>>a[i];
b[i]=0;}
for(int i=0; i<x; ++i){
  bool isD = false;
  for(int j= 0; j<x; ++j){
    if(a[i]==a[j])
      isD= true;

  }
  if(!isD){
    b[i]=a[i];
  }
}
