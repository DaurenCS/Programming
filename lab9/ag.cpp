#include<iostream>
using namespace std;

  int main(){
 int x;cin>>x;
int a[x];

for(int i=0; i<x; ++i){
cin>>a[i];}

int max= 0; 
for(int i=1; i<x; i++ )
{
  if(a[i]>a[max])
    max=i ;


}
int min= 0;
 for(int i= 1; i<x; ++i){
  if(a[i]<a[min])
    min=i;
 }


a[max]= a[min];

for(int i=0; i<x; ++i){
cout<<a[i]<<" ";}
}
