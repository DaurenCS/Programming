#include <bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	string s;
cin>>s;
int index;
int x=7;

string a[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
     if(s=="SUN"){
     	cout<<x;
     	exit(0);
     }

     for(int i=0; i<7; i++){
      
      if(s==a[i]){
      	index=i;
    	cout << x-index-1;
    		
}
   
}


}

    
 
    	
    
 
