#include<iostream>
using namespace std;

  int main(){
 int x;cin>>x;
int a[x];

for(int i=0; i<x; ++i){
cin>>a[i];}

 int max = a[0]; 
int k = 1;      
 
for (int i = 1; i < x; i++) 
{
    if (max < a[i] )
    {
        max = a[i];
        k = i+1;
    }
}
 
cout << k << endl;
}

