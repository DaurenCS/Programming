#include<iostream>
using namespace std;

  int main(){
 int x;cin>>x;
int a[x];

for(int i=0; i<x; ++i){
cin>>a[i];}
 int max=a[0];
 int max2=a[0];
for(int i=0; i<x; ++i){
	if(a[i]>max)
		max=a[i];

}
for(int i=0; i<x; ++i){
  if(a[i]<max && a[i]>max2)
    max2=a[i];
}
cout<<max2;
}