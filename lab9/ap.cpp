#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x;
	y=sqrt(x);
	if(y*y==x )
		cout<<"Yes";
	else 
		cout<<"No";
	
	return 0;
}