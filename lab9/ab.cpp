#include <iostream>
using namespace std;

   int main(){
int x; cin>>x;
int a[x];

for(int i=0; i<x; i++ ){
 cin>>a[i];
}
int y=0;
for(int i=0; i<x; i++ ){
	
	if(a[i]>0)
		y++;


}

cout<<y;
}