#include<bits/stdc++.h>

using namespace std;
int main(){
int x,y; cin>>x>>y;
int a[x][y];
for (int row = 0; row < x; ++row){
	for(int col=0 ; col< y; ++col){
		cin>>a[row][col];
	}
}
int mn=1e9;


 for(int row=0; row<x; row++){
 int sum1=0;
 	for(int col=0; col<y; col++)
 		sum1 +=a[row][col];
 		mn=min(mn, sum1 );
           
        
        
      
 			 
 }
 
for(int row=0; row<x; row++){
int sum1=0;
    for(int col=0; col<y; col++){
        sum1 += a[row][col];
        if(sum1==mn)
            cout<<row+1;
        return 0;
    }
}




 return 0;
}
 




 